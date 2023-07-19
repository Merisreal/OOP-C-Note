# Operator Overloading

Trong C++, các toán tử cơ bản như **`+`**, **`-`**, **`*`**, **`/`**, **`==`**, **`!=`**,... có thể được định nghĩa lại để hoạt động với các kiểu dữ liệu mà bạn tự định nghĩa trong các lớp. Điều này cho phép bạn thực hiện các phép toán giữa các đối tượng của lớp một cách tự nhiên.

Ví dụ cộng (+) 2 đối tượng phân số bên dưới. Khi cộng (+) sẽ bị lỗi, bởi vì chưa có định nghĩa toán tử cộng (+) cho đối tượng phân số:

```c
#include <iostream>
using namespace std;
class Phanso{
private:
	int tuso;//tử số của phân số
	int mauso;//mẫu số của phân số
public:
	Phanso(){
		tuso = 0;
		mauso = 1;
	}
	Phanso(int tuso, int mauso){
		this->tuso = tuso;
		this->mauso = mauso;
	}
	int getTuso(){
		return tuso;
	}
	int getMauso(){
		return mauso;
	}
	int setTuso(int tuso){
		this->tuso = tuso;
	}
	int setMauso(int mauso){
		this->mauso = mauso;
	}
};
void main()
{
	Phanso ps1(5, 9);
	Phanso ps2(7, 10);
	Phanso ps3;
	ps3 = ps1 + ps2;//lỗi toán tử + chưa định nghĩa
	system("pause");
}
```

**Cú pháp định nghĩa một toán tử nạp chồng:**

```c
Kiểu_trả_về operator <toán tử> (danh_sách_đối_số){
//Định nghĩa toán tử
}
```

- **Kiểu_trả_về** là kiểu dữ liệu của hàm nạp chồng toán tử.
- **<toán tử>** là tên toán tử cần nạp chồng (+, -, *, /,…)
- **operator <toán tử> <danh_sách_đối_số)** gọi là hàm nạp chồng toán tử. Nó có thể là hàm thành phần hoặc là hàm bạn của lớp (class) nhưng không thể là hàm tĩnh.

```c
Diem operator++();//Toán tử ++: toán tử 1 ngôi
PhanSo operator+(PhanSo ps);//Toán tử +: toán tử 2 ngôi
```

- Toán tử một ngôi là toán tử chỉ có một toán hạng. Ví dụ: x++, toán tử ++ chỉ có một toán hạng là x. Toán tử hai ngôi là toán tử có hai toán hạng. Ví dụ: a + b, toán tử + phải có đủ 2 số a và b thì mới cộng (+) được.

ví dụ khác:

```c
#include <iostream>
using namespace std;

class PhanSo {
private:
    int tuSo;
    int mauSo;

public:
    PhanSo(int tu, int mau) : tuSo(tu), mauSo(mau) {}

    // Operator Overloading: Định nghĩa lại toán tử '+'
    PhanSo operator+(const PhanSo& other) {
        int newTuSo = this->tuSo * other.mauSo + this->mauSo * other.tuSo;
        int newMauSo = this->mauSo * other.mauSo;
        return PhanSo(newTuSo, newMauSo);
    }

    // Operator Overloading: Định nghĩa lại toán tử '<<'
    friend ostream& operator<<(ostream& os, const PhanSo& phanSo) {
        os << phanSo.tuSo << "/" << phanSo.mauSo;
        return os;
    }
};

int main() {
    PhanSo ps1(1, 2);
    PhanSo ps2(1, 3);

    PhanSo psTong = ps1 + ps2; // Sử dụng toán tử +
    cout << "Tổng: " << psTong << endl; // Sử dụng toán tử <<

    return 0;
}
```

Operator Overloading giúp làm cho code dễ đọc hơn và giảm thiểu lượng code lặp đi lặp lại, đồng thời giúp tăng tính linh hoạt và hiệu quả trong việc xử lý các phép toán của lớp tự định nghĩa.
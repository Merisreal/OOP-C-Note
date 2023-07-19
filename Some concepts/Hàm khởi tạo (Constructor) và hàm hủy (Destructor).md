# Hàm khởi tạo (Constructor) và hàm hủy (Destructor)

## Hàm khởi tạo (Constructor):
Là một phương thức hàm đặc biệt được sử dụng để khởi tạo một object khi nó được tạo. Một constructor có **tên giống với tên của class và không có kiểu trả về**. Khi một đối tượng mới được tạo, constructor tương ứng với class đó sẽ được **gọi tự động**. Constructor cung cấp một cách để khởi tạo đối tượng và đảm bảo rằng các thành viên dữ liệu của đối tượng có giá trị hợp lệ và phù hợp. Mục đích chính của một constructor là thiết lập trạng thái ban đầu cho một đối tượng bằng cách gán giá trị cho các thành viên dữ liệu hoặc thuộc tính của nó.

```cpp
public class SinhVien {
    private String ten;
    private int tuoi;
    private String lop;

    // Constructor với các tham số
    public SinhVien(String ten, int tuoi, String lop) {
        this.ten = ten;
        this.tuoi = tuoi;
        this.lop = lop;
    }
.....
...
// Phương thức main để minh họa constructor
    public static void main(String[] args) {
        // Tạo một đối tượng SinhVien bằng constructor
        SinhVien sv = new SinhVien("Nguyễn Văn A", 20, "K58T");
```

## Hàm hủy (Destructor):

là một phương thức đặc biệt trong một class được gọi tự động khi một đối tượng của lớp đó bị hủy. Nhiệm vụ chính của hàm hủy là giải phóng tài nguyên mà đối tượng đã sử dụng trong quá trình sống.

Hàm hủy (*Destructor*) trong C++ được gọi tự động khi đối tượng đi ra khỏi phạm vi:

- Kết thúc hàm
- Kết thúc chương trình
- Kết thúc một block
- Toán tử delete được gọi

Có hai hạn chế khi sử dụng hàm hủy đó là:

- Chúng ta không thể lấy địa chỉ của nó
- Lớp con không có thừa kế hàm hủy từ lớp cha của nó

```cpp
#include <iostream>  
using namespace std;  
class Sinhvien  {  
   public:  
        Sinhvien() {    
            cout << "Ham xay dung duoc goi" << endl;    
        }    
        ~Sinhvien() {    
            cout << "Ham huy duoc goi" << endl;    
        }  
};  
int main(void) {  
    Sinhvien n1;   
    Sinhvien n2; 
    return 0;  
}

```

![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/f3aae2cb-1e02-49f8-b40f-9438e48baa60/Untitled.png)

.
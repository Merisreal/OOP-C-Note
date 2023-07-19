# Friend Funtions & Friend Class

# Friend Funtions:

Là một loại hàm đặc biệt có quyền truy cập vào các thành viên private của một lớp, ngay cả khi nó không phải là thành viên của lớp đó. Điều này cho phép hàm bạn (friend function) hoạt động như một hàm bên ngoài, nhưng vẫn có thể truy cập vào các thành viên private của lớp.

```cpp
#include <iostream>

class MyClass {
private:
    int x;

public:
    MyClass(int a) : x(a) {}

    // Khai báo hàm bạn
    friend void hienThi(const MyClass& obj);
};

// Định nghĩa hàm bạn, có thể truy cập vào thành viên private của lớp MyClass
void hienThi(const MyClass& obj) {
    std::cout << "Gia tri x la: " << obj.x << std::endl;
}

int main() {
    MyClass obj(5);
    hienThi(obj); // Gọi hàm bạn từ hàm main, xuất ra giá trị x của obj

    return 0;
}
```

```cpp
Gia tri x la: 5
```

## Friend Class

Lớp bạn cũng giống như hàm bạn là nó có thể truy cập các biến thành viên private của lớp kia.

```cpp
#include <iostream>

// Khai báo lớp chủ (host class)
class LopChu {
private:
    int x;

public:
    LopChu(int a) : x(a) {}

    // Khai báo lớp bạn (friend class)
    friend class LopBan;
};

// Định nghĩa lớp bạn (friend class), có thể truy cập vào thành viên private của lớp LopChu
class LopBan {
public:
    void hienThi(const LopChu& obj) {
        std::cout << "Gia tri x la: " << obj.x << std::endl;
    }
};

int main() {
    LopChu obj1(5);
    LopBan obj2;
    obj2.hienThi(obj1); // Gọi phương thức hienThi từ lớp bạn, truy cập vào giá trị x của obj1

    return 0;
}
```

.
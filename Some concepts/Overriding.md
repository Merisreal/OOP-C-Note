# Overriding

## ****Ghi đè (Overriding):****

Nó cho phép lớp con (subclass) định nghĩa lại một phương thức (method) trong lớp cha (superclass) có cùng tên và cùng tham số. Khi đối tượng của lớp con được tạo, phương thức của **lớp con** sẽ **được gọi thay vì phương thức** của **lớp cha** nếu phương thức đó được gọi.

Điều quan trọng cần lưu ý về overriding là các phương thức phải có cùng tên, cùng tham số và cùng kiểu trả về trong cả lớp cha và lớp con. Tức là chúng ta chỉ có thể ghi đè các phương thức ở lớp con nếu chúng đã được định nghĩa trong lớp cha.

```c
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Vẽ hình" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Vẽ hình tròn" << endl;
    }
};

int main() {
    Shape* shapePtr;
    Circle circle;

    shapePtr = &circle;
    shapePtr->draw(); // Kết quả: "Vẽ hình tròn"

    return 0;
}
```

Từ khóa **`virtual`** được sử dụng trong việc kế thừa (inheritance) và ghi đè (overriding) các phương thức. Khi một phương thức được khai báo là **`virtual`** trong lớp cơ sở (base class), nó cho phép lớp con (subclass) định nghĩa lại (override) phương thức đó để có hành vi riêng trong lớp con.

Một phương thức **`virtual`** trong lớp cơ sở thường không có một thân hàm (function body) cụ thể. Điều này cho phép các lớp con có thể định nghĩa lại phương thức này dựa trên các nhu cầu của chúng.
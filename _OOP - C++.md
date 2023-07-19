

# OOP (Object-oriented programming)

- OOP là một mô hình  tổ chức các dòng code dưới dạng các đối tượng (Objects), hay các lớp (Class) và mô hình hóa các thực thể ngoài thế giới thực dưới dạng các đối tượng có thuộc tính (Data) và hành vi (methods).
- Một ví dụ về OOP: giả dụ chúng ta muốn tạo ra một chương trình về mô hình hóa các loại xe, chúng ta sẽ định nghĩa ra một class “Car’’, đây là đại diện để tạo ra các objects “ Car”. Class này sẽ có các thuộc tính như, màu sác, kiểu dáng, để mô tả các thuộc tính của ô tả và các methods như “tăng tốc” và”dừng” để xác định hành vi của ô tô
- Sử dụng class này, chúng ta có thể tạo ra được nhiều đối tượng ô tô, mỗi đối tượng sau sẽ các thuộc tính của riêng nó, Ví dụ: 1 chiếc Toyota - màu xanh hay Camry - màu đỏ. Mỗi đối tượng sẽ có trạng thái riêng (attribute vallues) và cso thể thực hiện hành động (methods) độc lập

Một số khái niệm cơ bản, hoạt động như các khối để xây dựng nên OOP:

1. Class (lớp)
2. Objects (đối tượng)
3. Encapsulation (tính đóng gói)
4. Abstraction (tính trừu tượng)
5. Polymorphism (tính đa hình)



# 1.Class & Objects

## Objects:

là một thực thể độc lập bao gồm dữ liệu (data ) và các phương thức (funtions) được sử dụng để thao tác với data

**Một objects bao gồm:**

- Name -- Tên biến chúng ta đặt cho nó
- Member data -- Dữ liệu được mô tả đối tượng
- Member functions -- các chức năng chính liên quan đến objects

**Khởi tạo Objects:** 

Lấy ví dụ car ở trên:

```cpp
Car myCar;
```

```cpp
myCar.color = "red";
myCar.make = "Toyota";
myCar.model = "Camry";
```

Ta đã tạo ra objects mới tên “myCar” của lớp Car. Đối tượng mới này sẽ có các trạng thái **duy nhất** của riêng nó và có thể thực hiện được các hành động được xác định bởi các phương thức của Class, như “Tăng tốc” & “ Dừng”

## Class:

Một kế hoạch chi tiết cho các objects. Một class do người dùng định nghĩa sẽ miêu tả một loại objects nhất định sẽ trông như thế nào. Một class sẽ bao gồm 2 phần, phần khai báo và phần định nghĩa. Thông thường các phần này sẽ chia thành các tệp riêng biệt

⇒ Một lớp định nghĩa một mô hình chung cho một nhóm đối tượng, trong khi mỗi đối tượng là một phiên bản cụ thể của lớp đó với trạng thái riêng biệt.

Ví dụ, nếu bạn có một class "Hình chữ nhật" với các thuộc tính như chiều dài và chiều rộng, bạn có thể tạo ra nhiều objects hình chữ nhật khác nhau từ class này. Mỗi objects có thể có chiều dài và chiều rộng khác nhau, nhưng chúng sẽ đều có các phương thức chung như tính diện tích hoặc tính chu vi.

```cpp
class HinhChuNhat {
private:
    float chieuDai;
    float chieuRong;

public:
    // Constructor
    HinhChuNhat(float dai, float rong) {
        chieuDai = dai;
        chieuRong = rong;
    }

    // Phương thức tính diện tích
    float tinhDienTich() {
        return chieuDai * chieuRong;
    }

    // Phương thức tính chu vi
    float tinhChuVi() {
        return 2 * (chieuDai + chieuRong);
    }
};
```

# 1.1 Access modifier

Có 3 loại access modifier trong C++:

- Public
- Private
- Protected

Note: Nếu chúng ta ko chọn quyền truy cập cho các thành phần trong class. Thì mặc định access modifier sẽ là Private

## A) `public`

Các thành viên được khai báo với từ khóa `**public`** có thể truy cập từ bất kỳ đâu trong chương trình. Các thành phần`**public`**  có thể được truy cập trực tiếp từ các đối tượng của class hoặc từ bên ngoài class. Điều này có nghĩa là các thành phần `**public`**  có tính chất công khai và có thể được sử dụng và thay đổi dễ dàng.

## B) **`private`**

Các thành phần được khai báo với từ khóa **`private`** chỉ có thể truy cập từ bên trong class chứa chúng. Các thành viên **`private`**  không thể được truy cập trực tiếp từ bên ngoài class. Điều này đảm bảo tính bảo mật của dữ liệu và hạn chế việc truy cập trực tiếp từ các đối tượng khác. Để truy cập các thành viên **`private`** , chúng ta cần sử dụng các phương thức công khai (public methods) mà lớp cung cấp.

```cpp
class SinhVien {
private:
    string ten;
    int tuoi;

public:
    // Phương thức công khai để thiết lập tên của sinh viên
    void setTen(string tenSV) {
        ten = tenSV;
    }

    // Phương thức công khai để lấy tuổi của sinh viên
    int getTuoi() {
        return tuoi;
    }
};
```

## C) **`protected`**

Các thành phầnđược khai báo với từ khóa **`protected`** tương tự như **`private`** , chỉ có thể truy cập từ bên trong class chứa chúng. Tuy nhiên, các thành phần **`protected`** cũng có thể được truy cập từ các class kế thừa (lớp con) của class chứa chúng. Điều này cho phép các lớp con có thể truy cập và sử dụng các thành phần **`protected`** , nhưng không cho phép truy cập trực tiếp từ bên ngoài class.

```cpp

class SinhVien {
protected:
    string ten;

public:
    void setTen(string tenSV) {
        ten = tenSV;
    }

    void thongTin() {
        cout << "Tên: " << ten << endl;
    }
};

class SinhVienIT : public SinhVien {
private:
    string nganh;

public:
    void setNganh(string nganhSV) {
        nganh = nganhSV;
    }

    void hienThi() {
        thongTin();
        cout << "Ngành: " << nganh << endl;
    }
};

int main() {
    SinhVienIT sv;
    sv.setTen("Nguyễn Văn A");
    sv.setNganh("Công nghệ thông tin");
    sv.hienThi();

    return 0;
}
```

# 2. tính đóng gói (Encapsulation)

Hiểu đơn giản, gói dữ liệu và thông tin vào trong một lớp (class) được gọi là **tính đóng gói**.

Nó cho phép bạn kết hợp dữ liệu (data) và mã (code) liên quan với nhau thành một đơn vị duy nhất, được gọi là một "đối tượng" (object). Đóng gói giúp che dấu thông tin chi tiết bên trong đối tượng và chỉ cho phép truy cập thông qua các phương thức (methods) công khai (public methods).

**Tính đóng gói** được thể hiện khi mỗi đối tượng mang trạng thái là `private` ở bên trong một `class` và những đối tượng khác không thể truy cập trực tiếp vào phạm vi này. Thay vào đó họ chỉ có thể gọi các hàm mang phạm vi `public` được gọi là phương thức.

### 2.1 ****Setter và getter****

**Setter** và **Getter** là 2 phương thức sử dụng để cập nhật hoặc lấy ra giá trị thuộc tính, đặc biệt dành cho các thuộc tính ở phạm vi **private**.

**Cách khai báo setter và getter:**

Setter:

```cpp
void set<tên thuộc tính> (<tham số giá trị mới>) {

      this-> <tên thuộc tính> = <tham số giá trị mới>;

}
```

Getter:

```cpp
<kiểu dữ liệu thuộc tính> get<tên thuộc tính> () {

      return  <tên thuộc tính>;

}
```

**Hình minh họa về tính đóng gói:**

![](https://hackmd.io/_uploads/BJmB4NBqh.png)

**Code minh họa về tính đóng gói:**

```cpp
#include <iostream>
using namespace std;

class DoiTuong {
private:
    int duLieu; // Dữ liệu được che dấu bên trong lớp

public:
    void setDuLieu(int giaTri) {
        duLieu = giaTri;
    }

    int getDuLieu() {
        return duLieu;
    }
};

int main() {
    DoiTuong obj;
    obj.setDuLieu(42); // Gọi phương thức setter để đặt giá trị dữ liệu
    cout << "Gia tri du lieu: " << obj.getDuLieu() << endl; // Gọi phương thức getter để lấy giá trị dữ liệu

    return 0;
}
```

Trong ví dụ trên, chúng ta có một lớp gọi là "DoiTuong" (Object) với một thuộc tính riêng tư "duLieu" (data). Thuộc tính này được che dấu bằng cách đặt trong phạm vi riêng tư (private).

Để truy cập và thay đổi giá trị của thuộc tính "duLieu", chúng ta sử dụng hai phương thức công khai: "setDuLieu" và "getDuLieu". Phương thức "setDuLieu" dùng để đặt giá trị của "duLieu" và phương thức "getDuLieu" dùng để lấy giá trị của "duLieu".

# 3. Tính kế thừa (Inheritance)

## 3.1. Một trong các tính chất đặc trưng khác của OOP là tính kế thừa (Inheritance)

Các class mới được tạo ra từ các class đã tồn tại trước đó. Class mới được tạo ra được gọi là lớp con (child class) hay lớp dẫn xuất (derived class)

Các class được các class kế thừa được gọi là class cha ( parent class) hay (base class)

→ Các class con bây giờ chính là kế thừa lại từ các class cha

- Các class con sẽ kế thừa tất cả các thuộc tính của class cha, không làm thay đổi về thuộc tính của lớp cha
- Có thể thêm nhiều thuộc tính hay tính năng mới cho class cha, và các thuộc tính hay tính năng mới này trong class con không ảnh hưởng đến class cha.
- **Sub Class:** **Các class kế thừa các thuộc tính từ các class khác được gọi là Subclass hay Derived Class**
- **Super Class:  Các class có các thuộc tính được kế thừa bởi các class khác được gọi là Superclass hay Base Class**

## 3.2. Mục đích của tính kế thừa (Inheritance):

giúp ta tái sử dụng lại những đoạn code đã code, tránh việc giải quyết lại các bài toán con đã có lời giải trước đó, gây lãng phí thời gian. Nếu chỉ là một, hai hoặc ba hành động cần giải quyết thì không thành vấn đề, nhưng nếu là một trăm thì đó lại là chuyện khác

Ví dụ: Ta có class Person (tên, tuổi), class Sinhvien sẽ kế thừa lại class Person vì Sinhvien cũng là con người sẽ có những đặc điểm như (tên, tuổi), và chúng ta có thể thêm vào những thuộc tính cho class Sinhvien như “Mã sinh viên”

```cpp
#include <iostream>
using namespace std;

// Lớp cơ sở: Person (Người)
class Person {
protected:
    string name;
    int age;
public:
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }
    void displayInfo() {
        cout << "Tên: " << name << endl;
        cout << "Tuổi: " << age << endl;
    }
};

// Lớp dẫn xuất: Student (Sinh viên)
class Student : public Person {
private:
    int studentId;
public:
    void setStudentId(int id) {
        studentId = id;
    }
    void displayInfo() {
        cout << "Mã sinh viên: " << studentId << endl;
        cout << "Tên: " << name << endl;
        cout << "Tuổi: " << age << endl;
    }
};

int main() {
    // Tạo đối tượng sinh viên
    Student student;
    
    // Gán thông tin cho đối tượng sinh viên
    student.setName("Nguyễn Văn A");
    student.setAge(20);
    student.setStudentId(12345);
    
    // Hiển thị thông tin sinh viên
    cout << "Thông tin sinh viên:" << endl;
    student.displayInfo();
    
    return 0;
}
```

## 3.3 Cú pháp khai báo class con trong C++:

```cpp
class <tên_class_con> : <phạm_vi_truy_cập> <tên_class_cha>
{
 /*
code
*/
};
```

```cpp
class Student : public/private/protected (/*nếu không để mặc định sẽ là public*/) Person
{ 
/*
code
*/
}
```

## 3.4 Access mode trong tính kế thừa



- `public` :
    - Các thuộc tính `public`** của A sẽ trở thành thuộc tính `**public`** của B
    - Các thuộc tính **`protected`** của A sẽ trở thành **`protected`** của B
- **`private`** :
    - Các thuộc tính `public` của A sẽ trở thành thuộc tính `private` của B
    - Các thuộc tính `protected` của A sẽ trở thành `private` của B
- **`protected`** :
    - Các thuộc tính `public` của A sẽ trở thành thuộc tính **`protected`** của B
    - Các thuộc tính **`protected`** của A sẽ trở thành thuộc tính **`protected`** của B

## 3.5 Các loại kế thừa:

- **Kế thừa đơn giản (Simple Inheritance):** Khi một lớp con được kế thừa từ một lớp cha duy nhất.

```cpp

// Single inheritance

class Vehicle {
public:
	
};

// sub class derived from a single base classes
class Car : public Vehicle {

};

}
```

- **Kế thừa đa năng (Multilevel Inheritance)**: Khi một lớp con được kế thừa từ một lớp cha, và lớp cha đó lại được kế thừa từ một lớp khác.

```cpp

// Multilevel Inheritance

// base class
class Vehicle {

// first sub_class derived from class vehicle
class fourWheeler : public Vehicle {

};
// sub class derived from the derived base class fourWheeler
class Car : public fourWheeler {

};

```

- **Kế thừa đa nhiệm (Multiple Inheritance)**: Khi một lớp con được kế thừa từ nhiều lớp cha.

```cpp
// multiple inheritance

// first base class
class Vehicle {

};

// second base class
class FourWheeler {

};

// sub class derived from two base classes
class Car : public Vehicle, public FourWheeler {
};

```

- **Kế thừa phân cấp (Hierarchical Inheritance):** Nhiều hơn một lớp con kế thừa từ lớp cha:

```cpp

// Hierarchical Inheritance

// base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// first sub class
class Car : public Vehicle {
};

// second sub class
class Bus : public Vehicle {
};

```

- Kế thừa lai **Hybrid (Virtual) Inheritance**: Bao gồm nhiều loại kế thừa kết hợp lại với nhau:

Ví dụ: kết hợp kế thừa **Hierarchical** và **Multiple Inheritance.**

![](https://hackmd.io/_uploads/S1DurVS52.png)


```cpp
// C++ program for Hybrid Inheritance

// base class
class Vehicle {

};

// base class
class Fare {

};

// first sub class
class Car : public Vehicle {
};

// second sub class
class Bus : public Vehicle, public Fare {
};

```

# 4.Tính đa hình (Polymorphism )

là một tính năng quan trọng của lập trình hướng đối tượng, cho phép các đối tượng được xử lý như các đối tượng của lớp cơ sở (base class) mà không cần biết chính xác kiểu của đối tượng con (subclass). Điều này giúp tăng tính linh hoạt và tái sử dụng mã trong chương trình.

## 4.2 ****Các loại đa hình:****

### A)  Compile time Polymorphism.

Đa hình biên compile (Compile-time polymorphism): Được thực hiện bằng cách sử dụng kỹ thuật **Operator Overloading** và **Operator Overloading**

```c
#include <iostream>
using namespace std;

class Box
{
   public:

      double tinhTheTich(void)
      {
         return chieudai * chieurong * chieucao;
      }
      void setChieuDai( double dai )
      {
          chieudai = dai;
      }

      void setChieuRong( double rong )
      {
          chieurong = rong;
      }

      void setChieuCao( double cao )
      {
          chieucao = cao;
      }
      // Nap chong toan tu '+' de cong hai doi tuong Box.
      Box operator+(const Box& b)
      {
         Box box;
         box.chieudai = this->chieudai + b.chieudai;
         box.chieurong = this->chieurong + b.chieurong;
         box.chieucao = this->chieucao + b.chieucao;
         return box;
      }
   private:
      double chieudai;      // chieu dai cua mot box
      double chieurong;     // Chieu rong cua mot box
      double chieucao;      // Chieu cao cua mot box
};
// ham main cua chuong trinh
int main( )
{
   Box Box1;                // Khai bao Box1 la cua kieu Box
   Box Box2;                // Khai bao Box2 la cua kieu Box
   Box Box3;                // Khai bao Box3 la cua kieu Box
   double thetich = 0.0;     // Luu giu the tich cua mot box tai day
 
   // thong tin chi tiet cua box 1
   Box1.setChieuDai(5); 
   Box1.setChieuRong(2); 
   Box1.setChieuCao(4);
 
   // thong tin chi tiet cua box 2
   Box2.setChieuDai(7); 
   Box2.setChieuRong(6); 
   Box2.setChieuCao(9);
 
   // the tich cua box 1
   thetich = Box1.tinhTheTich();
   cout << "The tich cua Box1 la: " << thetich <<endl;
 
   // the tich cua box 2
   thetich = Box2.tinhTheTich();
   cout << "The tich cua Box2 la: " << thetich <<endl;

   // cong hai doi tuong nhu sau:
   Box3 = Box1 + Box2;

   // the tich cua box 3
   thetich = Box3.tinhTheTich();
   cout << "The tich cua Box3 la: " << thetich <<endl;

   return 0;
}
```

```c
The tich cua Box1 la: 40
The tich cua Box2 la: 378
The tich cua Box3 la: 1248
```

### B. ****Runtime Polymorphism:****

Giống như ví dụ về phần Overiding và Virtual Funtion

```c
#include <iostream>
using namespace std;

class Mayvitinh{  
	public: 	 	 	
	void show(){
	    cout << "mayvitinh" << endl;
	}
}; 
class mayAcer: public Mayvitinh{  	
    public: 	 	 	
    void show(){
        cout << "mayAcer" << endl;
    }
}; 

int main(){
    mayAcer may1; 
    Mayvitinh *tenmay = &may1;
    tenmay->show(); 
}
```

Chương trình sau khi chạy sẽ gọi đến phương thức `show()` của lớp `Mayvitinh`, mà không gọi tới phương thức `show()` của lớp `mayAcer`.

Vậy để chương trình gọi tới phương thức `show()` của lớp `mayAcer` ta sử dụng hàm ảo `virtual` như sau:

```cpp
#include <iostream>using namespace std;

class Mayvitinh{
	public:
	virtual void show(){
	    cout << "mayvitinh" << endl;
	}
};
class mayAcer: public Mayvitinh{
    public:
    void show(){
        cout << "mayAcer" << endl;
    }
};

int main(){
    mayAcer may1;
    Mayvitinh *tenmay = &may1;
    tenmay->show();
}
```

```cpp
mayAcer
```

# 5. Abstraction (tính trừu tượng)

Là tính chất trong đó chỉ biểu lộ những thành phần thiết yếu với người dùng và ẩn dấu đi  những thông tin không cần thiết: 

Ví dụ: khi rút tiền ATM - nhấn nút số tiền tương ứng  - tiền nhả ra - Khi ấn nút xong những điều xảy ra bên trong máy, những người dùng phổ thông không cần biết

Tính trừu tượng thể hiện qua Abstract class và interface

## 5.1 **Lớp trừu tượng (Abstract class)**

Lớp trừu tượng là một lớp mà không thể khởi tạo đối tượng từ lớp đó. Lớp trừu tượng thường chứa ít nhất một phương thức trừu tượng, và lớp con kế thừa từ lớp trừu tượng sẽ phải triển khai lại tất cả các phương thức trừu tượng của lớp cha.

```cpp
class HinhHoc {
public:
    virtual void tinhDienTich() = 0; // Phương thức trừu tượng

    void thongTin() {
        cout << "Day la hinh hoc" << endl;
    }
};

class HinhChuNhat : public HinhHoc {
public:
    void tinhDienTich() override {
        // Triển khai tính diện tích cho hình chữ nhật
    }
};

class HinhTron : public HinhHoc {
public:
    void tinhDienTich() override {
        // Triển khai tính diện tích cho hình tròn
    }
};
```

## 5.2 Phương thức trừu tượng (Abstract method):

Phương thức trừu tượng là một phương thức trong lớp trừu tượng mà chỉ có khai báo mà không có định nghĩa thực tế. Phương thức này sẽ được triển khai lại trong lớp con kế thừa.

Trong ví dụ ở trên, ta đã khai báo phương thức **`tinhDienTich()`** là một phương thức trừu tượng trong lớp **`HinhHoc`**, và các lớp con phải triển khai lại phương thức này.

Tính trừu tượng giúp cho việc phát triển phần mềm linh hoạt và dễ dàng mở rộng trong tương lai, đồng thời tạo ra cấu trúc chung cho các lớp liên quan trong chương trình C++.
# OOP C++ vs OOP  Java

### **Access modifier:**

- C++ có 3 phạm vi truy xuất của thuộc tính và phương thức: `private`, `protected`, `public`.
- Java mở rộng hơn C++ có 4 phạm vi truy cập: `private`, `default`, `protected`, `public`.

- Trong C++ nếu không chỉ rõ phạm vi truy cập, mặc định là `private`.
- Trong Java nếu không chỉ rõ thì mặc định thuộc tính hay phương thức có phạm vi truy cập là `default`.

### **Operator Overloading:**

- C++ cho phép nạp chồng các toán tử như toán tử vào ra `<<` `>>` `+` `–` `*` `/` hay `-=` `+=` `/=` `*/`, ...
- Java không cho phép nạp chồng toán tử, chỉ có toán tử `+` cho phép nối hai chuỗi.

### **Multiple Inheritance:**

- C++ hỗ trợ đa kế thừa, 1 class có thể kế thừa nhiều class.
- Java không cho phép đa kế thừa từ nhiều class, mà chỉ kế thừa 1 class.

### **Hỗ trợ interface:**

- C++ không tồn tại khái niệm interface.
- Java hỗ trợ interface để kiểm soát các ràng buộc về ứng xử của class.

### **Friend Funtions & Friend Class:**

- C++ có hỗ trợ
- Java không hỗ trợ

### Class cha của mọi class:

- 1 class trong C++ được tạo ra và chưa kế thừa từ class nào thì nó không có class cha.
- Mặc định trong Java khi 1 class được tạo ra thì class cha của nó là class `Object`.

### Hàm `main`:

- Hàm `main` của C++ không thuộc về lớp nào, là 1 hàm cục bộ.
- Hàm `main` trong Java cũng nằm trong 1 class vì Java là ngôn ngữ thuần OOP.

### Destructor:

- C++ có destructor, lập trình viên phải chủ động thu dọn vùng nhớ đã cấp phát.
- Java không có khái niệm destructor mà có bộ thu gom rác gọi là GC (garbage collection), khi 1 đối tượng không còn tham chiếu nữa thì bộ thu gom rác sẽ tiến hành thu hồi.

https://www.geeksforgeeks.org/similarities-and-difference-between-java-and-c/
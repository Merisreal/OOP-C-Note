# Overloading

## 1.3 ****Nạp chồng phương thức (Overloading):****

Overloading (hay còn gọi là nạp chồng) trong C++ là một tính năng cho phép các hàm hoặc toán tử có cùng tên nhưng có các tham số khác nhau hoạt động khác nhau. Điều này cho phép chúng ta sử dụng cùng tên hàm hoặc toán tử với các kiểu dữ liệu khác nhau mà không gây xung đột.

```c
int tinhTong(int a, int b) {
    return a + b;
}

float tinhTong(float a, float b) {
    return a + b;
}
```

.
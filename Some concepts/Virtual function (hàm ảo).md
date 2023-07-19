Virtual Function là để khai báo một function ở class cha (base class) mà sau đó các class kế thừa (derived class) có thể override function đó

Để khai báo hàm ảo, bạn thêm từ khóa virtual trước tên hàm. Hãy theo dõi ví dụ minh họa sau để hiểu hơn cách hàm ảo làm việc.

```cpp
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
   Mayvitinh *may1= new Mayvitinh();
   mayAcer *may2 = new mayAcer(); 
   may1->show(); 
   may2->show(); 

}
```

```cpp
mayvitinh
mayAcer
```

Output như chúng ta dự đoán, virtual vẫn chưa được sử dụng. Tuy nhiên ta sẽ xét tới ví dụ này

```cpp
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
   Mayvitinh *may1= new Mayvitinh();
   Mayvitinh *may2 = new mayAcer(); //khác với lúc nãy là mayAcer*may2= new may2();
   may1->show(); 
   may2->show(); 

}
```

```cpp
mayvitinh
mayvitinh
```

Mặc dù may2 được tạo ra từ constructor của class mayAcer thế nhưng nó hành xử lại như thể nó là một Mayvitinh. Xét một ví dụ thực tế hơn chút nữa:

```cpp
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

void checktest (Mayvitinh* vitinh)
{
   vitinh->show();
}

int main(){
   Mayvitinh *may1= new Mayvitinh();
   Mayvitinh *may2 = new mayAcer(); //khác với lúc nãy là mayAcer*may2= new may2();
   checktest(may1); 
   checktest(may2);
}
```

Output sẽ vẫn lại là:

```cpp
mayvitinh
mayvitinh
```

Vì vậy chúng ta sẽ fix với vấn đề này với **virtual** như sau:

```cpp
#include <iostream>
using namespace std;

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

void checktest (Mayvitinh* vitinh)
{
   vitinh->show();
}

int main(){
   Mayvitinh *may1= new Mayvitinh();
   Mayvitinh *may2 = new mayAcer(); 
   checktest(may1); 
   checktest(may2);
}
```

```cpp
mayvitinh
mayAcer
```
// MyClass.h  
#ifndef MYCLASS_H
#define MYCLASS_H  

class MyClass {  
public:  
    MyClass(int value) : value_(value) {}  
    void doSomething() { 
        printf("MyClass doSomething called with value: %d\n", value_);  
    }  
  
private:  
    int value_;  
};  

#endif  

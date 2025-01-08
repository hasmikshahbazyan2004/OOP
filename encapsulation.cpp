// In this code I'll show you how you can break encapsulaation in different ways
//1. declare a pointer to object reference
#include <iostream>

/* class A{
private:
    int x = 10;
public:
    void print(){
        std::cout << x << std::endl;
    }
};
 
int main(){
    A obj;
    int* ptr = (int*)&obj;
    *ptr = 20;
    obj.print();
} */

//2.write:
// #define private public


/* class A{
private:
    int x = 10;
public:
    void print(){
        std::cout << x << std::endl;
    }
};
 
int main(){
    A obj;
    std::cout << obj.x << std::endl;
} */

//3.have a getter method which return reference to the private member of the class

class A{
private:
    int x = 10;
public:
    void print(){
        std::cout << x << std::endl;
    }

    int& getX(){
        return x;
    }
};
 
int main(){
    A obj;
    int* k = &(obj.getX());
    *k = 20;
    obj.print();
}
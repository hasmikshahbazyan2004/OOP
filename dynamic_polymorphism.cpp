#include <iostream>
using namespace std;

class Animal{
public:
    void makeSound(){
        cout << "Animal sound\n";
    }    
};

class Dog: public Animal {
public:
    void makeSound() {
        cout << "Woof woof\n";
    }
};

class Cat: public Animal{
public:
    void makeSound() {
        cout << "Meow\n";
    }
};

int main(){
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1 -> makeSound(); //Output: Woof woof
    a2 -> makeSound(); // Output: Meow

    delete a1;
    delete a2;
}

/* If we remove virtual from the base class Animal, the program will output "Animal"
    for both calls. The reason is that when we watch to the derived object
    through base pointer, we can just see base part of the object. But when we have 
    virtual function in the base class and derived classes override it, the functions
    from derived classes will be called.
    THIS IS CALLED RUNTIME/DYNAMIC POLYMORPHISM.

 */
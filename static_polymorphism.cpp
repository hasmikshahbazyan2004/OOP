#include <iostream>
using namespace std;

class Printer {
public:
    void print(int i) { cout << "Printing integer: " << i << '\n'; }
    //void print(double d) { cout << "Printing double: " << d << '\n'; }
    //void print(string s) { cout << "Printing string: " << s << '\n'; }
    void print(string s = "Default string") {cout << s << endl;}
};

int main() {
    Printer p;
    //p.print(42);
    //p.print(3.14);
    p.print("Hello, Polymorphism");
    p.print();
}

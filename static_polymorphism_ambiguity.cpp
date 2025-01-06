#include <iostream>
using namespace std;

class Printer {
public:
    void print(int i = 0) { cout << "Printing integer: " << i << '\n'; }
    void print(string s = "Default") { cout << "Printing string: " << s << '\n'; }
};

int main() {
    Printer p;
    p.print(); // Ambiguous!
}

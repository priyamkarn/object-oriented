#include <iostream>
using namespace std;

class addition {
public:
    int a;
    int b;
    
    addition(int a, int b) {
        this->a = a;
        this->b = b;
    }
    
    int operator+(addition ab) {
        return this->a + ab.a;
    }
};

class addi : public addition {
public:
    addi(int a, int b) : addition(a, b) { // Call base class constructor
    }
    
    void set() {
        a += 10;
    }
    void print()
    {
        cout<<this->a<<endl;
    }
};

int main() {
    addition b(5, 9);
    addition c(11, 8);
    addi d(11, 8);
    d.set();
    d.print();
    return 0;
}

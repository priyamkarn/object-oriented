#include<iostream>
using namespace std;
class Base {
public:
    virtual void display() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    Base* ptr = &baseObj;
    ptr->display();  // Early binding: calls Base::display()

    ptr = &derivedObj;
    ptr->display();  // Early binding: calls Base::display() (without 'virtual')

    return 0;
}

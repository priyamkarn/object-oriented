//this pointer ?
//It specifies every object by its own address

//What is the type of "this" pointer ?
//Ans : For a class X, the type of this pointer is ‘X* ‘.
//      Also, if a member function of X is declared as const, then the type of this pointer is ‘const X *’
/*
    Constructors in C++
    Constructor is used for construction of an object(i.e. initialization). Hence, It doesn't have return type.
    We can do initialization using initializer list as well.
    - We can have parameterized constructor (default parameters can also be used)
    - We can have overloaded constructors as well
    - NOTE: If you are declaring an array of objects (Complex c[3]; then you must have a default constructor because if we don't have default constructor, then
      it will require the parameters to be passed and with statement Complex c[3], you can't do that)
*/

#include <iostream>
using namespace std;
class oop
{
    public:
    int x=5;
    void print()
    {
        cout<<this->x<<endl;
    }
};
int main()
{
    oop obj;
    obj.print();

    return 0;
}

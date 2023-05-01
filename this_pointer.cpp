//this pointer ?
//It specifies every object by its own address

//What is the type of "this" pointer ?
//Ans : For a class X, the type of this pointer is ‘X* ‘.
//      Also, if a member function of X is declared as const, then the type of this pointer is ‘const X *’

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

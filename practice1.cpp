/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class car
{
    private:
    static int price;
    string name;
    public:
    car(string name)
    {
        this->name=name;
        price+=10;
    }
    
    void print()
    {
        cout<<this->name<<endl;
        cout<<price<<endl;
    }
    
    ~car()
    {
        cout<<"destructor called"<<endl;
    }
};
int car::price=0;
int main()
{
    car a("audi");
    a.print();
    car b("benz");
    b.print();
}

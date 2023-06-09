/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class addition
{
    private:
    public:
    int a;
    int b;
    addition(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    int operator+(addition ab)
    {
        return this->a+ab.a;
    }
    
};
int main()
{
   addition b(5,9);
   addition c(11,8);
   int d=b+c;
   cout<<d<<endl;
}

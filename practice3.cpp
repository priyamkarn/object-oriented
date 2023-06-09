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
    static int a;
    public:
    static int add(int x,int y)
    {
        return x+y;
    }
    static void print()
    {
        cout<<a<<endl;
    }
};
int addition::a=5;
int main()
{
    int sum=addition::add(4,5);
    cout<<sum<<endl;
    addition::print();
}

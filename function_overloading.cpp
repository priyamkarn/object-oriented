#include <iostream>
using namespace std;
class addition
{
    private:
    public:
    static int add(int a,int b)
    {
        return a+b;
    }
    static int add(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
   int f=addition::add(5,7);
   int s=addition::add(7,15,17);
   cout<<f<<" "<<s<<endl;
}

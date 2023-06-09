#include <iostream>
using namespace std;
class addition
{
    private:
    const int a;
    public:
    addition(int v):a(v)
    {
        
    }
    int print()const
    {
        return this->a;
        
    }
};
int main()
{
   addition ap(7);
   cout<<ap.print();
}

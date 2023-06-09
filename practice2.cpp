#include <iostream>
using namespace std;
class addition
{
    private:

    public:
    static int add(int x,int y)
    {
        return x+y;
    }
};
int main()
{
    int sum=addition::add(4,5);
    cout<<sum<<endl;
}

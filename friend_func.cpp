/*
When a function needs to access private data members of two or more different/independent classes and do some operation,
and at the same time the function can't be a member function of any one class because it won't be able to access private
members of other class, then friend function comes to rescue in this situation.
Using friend function, a global function can access private members of some class.*/
#include<iostream>
using namespace std
class y;
class x
{
    private:
    int a;
    public:
    void set(int r)
    {
        a=r;
    }
    friend int add(x a,y b);
};
class y
{
    private:
    int b;
    public:
    void sett(int r)
    {
        b=r;
    }
    friend int add(x ram,y bam);
};
int add(x r,y c)
{
    return r.a+c.b;
}
int main()
{
    x p;
    p.set(15);
    y q;
    q.sett(16);
    cout<<add(p,q);

    return 0;
}

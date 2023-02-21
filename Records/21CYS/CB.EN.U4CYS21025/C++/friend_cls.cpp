#include <iostream>
using namespace std;

class A
{
    int a = 10;
    //friend method
    friend void mul(A);
    friend class B;
    
    void add(int b)
    {
        cout<<a+b<<endl;
    }
};

class B
{
    public:
    int b;
    void addn(A a)
    {
        cout<<a.a<<endl;
    }
};

void mul(A a)
{
    cout<<a.a*5<<endl;
}

int main()
{
    A a;
    B b;
    b.addn(a);
    mul(a);

    return 0;
}
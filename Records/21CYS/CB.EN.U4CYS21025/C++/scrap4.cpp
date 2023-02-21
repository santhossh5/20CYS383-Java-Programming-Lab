#include <iostream>
using namespace std;

class A
{
public:
    void a()
    {
        cout << "A" << endl;
    }
};

class B
{
public:
    void b()
    {
        cout << "B" << endl;
    }
};

class C
{
public:
    void c()
    {
        cout << "C" << endl;
    }
};

class D
{
public:
    void d()
    {
        cout << "D" << endl;
    }
};

class E : public A, public B, public C, public D
{
public:
    void e()
    {
        cout << "E" << endl;
        a();
        b();
        c();
        d();
    }
};

int main()
{
    E q;
    q.e();
}

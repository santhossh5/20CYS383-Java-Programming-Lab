#include<iostream>
using namespace std;
class A
{
    public:
    int x;

    protected:
    int y;

    private:
    int z;
};

class B : public A
{
    public:
    void display()
    {
    int z = 5;
    cout << "x = " << x << endl;
    cout << "z = " << z << endl;
    }
};

int main()
{
    B b;
    b.display();
}
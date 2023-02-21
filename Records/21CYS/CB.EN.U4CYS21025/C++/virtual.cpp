#include <iostream>
using namespace std;

class base
{
public:
    virtual void show()
    {
        cout << "from base class" << endl;
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "from derived class" << endl;
    }
};

int main()
{
    base *ptr;
    base b;
    b.show();
    derived d;
    d.show();
    ptr = &d;
    ptr->show();
    return 0;
}
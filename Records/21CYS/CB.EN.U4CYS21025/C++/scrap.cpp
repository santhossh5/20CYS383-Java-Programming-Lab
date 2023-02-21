// C++ program to show how to call parameterized Constructor
// of base class when derived class's Constructor is called

#include <iostream>
using namespace std;

// base class
class Parent
{

public:
    int x;
    // base class's parameterized constructor
    Parent(int i)
    {
        x = i;
        cout << "Inside base class's parameterized "
                "constructor"
             << endl;
    }
};

// sub class
class Child : public Parent
{
    int s;
public:
    // sub class's parameterized constructor
    Child(int a, int l) : Parent(a)
    {
        s=l;
        cout << "Inside sub class's parameterized "
                "constructor"
             << endl;
    }
    void out()
    {
        cout <<s<< x << endl;
    }
};

// main function
int main()
{

    // creating object of class Child
    Child obj1(10,20);
    obj1.out();
    return 0;
}

/*#include <iostream>
using namespace std;
class A
{
    static int a;
    public:
    A()
    {
        cout << "A's constructor called " << endl;
    }
    static void printA()
    {
        cout << "This is A : " << a << endl;
    }
};

class B
{
    static int b;
    public:
    B()
    {
        cout << "B's constructor called " << endl;
    }
    static void printB()
    {
        cout << "This is B : " << b << endl;
    }
};

int A::a=5;
int B::b=55;

int main()
{
    B::printB();
    return 0;
}*/
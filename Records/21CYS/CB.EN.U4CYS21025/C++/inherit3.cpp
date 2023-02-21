#include <iostream>
using namespace std;
 
class A
{
    int x;
    static int a;
public:
    A() { cout << "A's constructor called " << endl;  }
};
 
class B
{
public:
    B() { cout << "B's constructor called " << endl; }
    static A getA() { return a; }
};
 
A::a;  // definition of a
 
int main()
{
    // static member 'a' is accessed without any object of B
    
 
    return 0;
}
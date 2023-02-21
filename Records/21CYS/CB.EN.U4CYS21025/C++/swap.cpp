#include <iostream>
using namespace std;

class swapp
{
    public:
    swapp()//constructor
    {
    }
}

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swap(a,b);
    cout << a << " " << b << endl;
    return 0;
}
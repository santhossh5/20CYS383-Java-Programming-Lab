#include <iostream>
using namespace std;
class complex
{
private:
    int r1, i1, r2, i2;

public:
    void read(int l, int b, int z, int x)
    {
        r1 = l;
        i1 = b;
        r2 = z;
        i2 = x;
    }

    int addr()
    {
        return r1 + r2;
    }

    int addi()
    {
        return i1 + i2;
    }
    void display();
};

void complex::display()
{
    cout << addr() << "+" << addi() << "i" << endl;
}

int main()
{
    complex T;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    T.read(a, b, c, d);
    T.display();
}

//  :: - scope resolution operator.

#include <iostream>
using namespace std;
class Triangle
{
private:
    int l, b;
    float area()
    {
        return (0.5*l*b);
    }

public:

    void read(int l, int b)
    {
        this->l=l;
        this->b=b;
    }

    void display();
};

void Triangle::display()
{
    cout<<area()<<endl;
}

int main()
{
    Triangle T[2];
    int a,b;
    for (int i = 0; i < 2; i++)
    {
        cin>>a>>b;
        T[i].read(a,b);
        T[i].display();
    }
}

//  :: - scope resolution operator.


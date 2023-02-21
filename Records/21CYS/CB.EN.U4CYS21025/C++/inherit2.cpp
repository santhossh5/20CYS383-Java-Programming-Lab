#include <iostream>
using namespace std;
class base
{
    public:
    int x;
    void getdata()
    {
        cin >> x;
        cout << x << endl;
    }
};

class derieved1 : public base
{
    public:
    int y;
    void readdata()
    {
        cin >> y;
    }
};

class derieved2 : public derieved1
{
    public:
    int z;
    void indata()
    {
        cin >> z;
    }

    void product()
    {
        cout << "Product = " << x*y*z << endl;
    }
};

int main()
{
    base::getdata();
    return 0;
}
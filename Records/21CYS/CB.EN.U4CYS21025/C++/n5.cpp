#include <iostream>
using namespace std;
class student
{
    private:
    int mark;
    public:
    void fun(int mark)
    {
        this->mark = mark;
        cout<<this->mark;
    }
    int santy = 5;
};

int main()
{
    student S,T;
    cout<<S.santy;
    //S.fun(10);
    //T.fun(20);
}
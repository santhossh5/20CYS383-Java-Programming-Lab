#include <iostream>
using namespace std;
int a=5;
class A
{
    public:
    A(int a)
    {
        cout<<this->a<<a<<endl;
    }
};

int main()
{
    A a(10);
}


/*#include <iostream>

using namespace std;

class alignas
{
    int s;
    public:
    alignas()
    {
    }
    alignas(int a)
    {
        s=a;
        
    }
    void dis(){
        cout<<s<<endl;
    }
};

int main()
{
    int n,a;
    cin>>n;
    alignas* arr = new alignas[n];
    for(int i=0;i<n;i++){
        cin>>a;
        arr[i]=alignas(a);
    }
    for(int i=0;i<n;i++){
        arr[i].dis();
    }
    return 0;
} */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"Print the multiplication table of a number upto 10:"<<endl;
    for(int i=1 ; i<=10 ; i++)
    {
        cout<<n<<" x "<<i<<" = "<<i*n<<endl;
    }
    return 0;
}
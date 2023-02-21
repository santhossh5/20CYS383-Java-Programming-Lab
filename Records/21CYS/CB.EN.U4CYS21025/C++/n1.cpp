#include <iostream>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    for(int i=s ; i<=n ; i++)
    {
        for(int j=s ; j<=i ; j++)
        {
            cout<<i<<"_"<<j<<" . ";
        }
        cout<<endl;
    }
}
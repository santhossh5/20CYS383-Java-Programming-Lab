#include <iostream>
using namespace std;
int main()
{
    int a,b,x,y,m=0,n=0;
    cin>>a>>b;
    x=a;
    y=b;
    int q[4],w[4];
    for(int i=0 ; i<4 ; i++)
    {
        if(y%10 == x%10)
        {
            m++;
        }
        q[i] = x%10;
        w[i] = y%10;
        x = x/10;
        y = y/10;
    }

    for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            if(q[i]==w[j] && i!=j)
            {
                n++;
            }
        }
    }
    cout<<"The hint is : "<<m<<"-"<<n<<endl;

    return 0;
}
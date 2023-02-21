#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    int x,y;
	    cin>>x>>y;
	    string a,b;
	    cin>>a;
	    cin>>b;
	    int f=0;
	    int aa=0,ab=0,ba=0,bb=0;
	    for(int i=0 ; i<x && f<2 ; i++)
	    {
	        int r=0;
	        for(int j=i-1 ; j>=0 ; j--)
	        {
	            if(a[i]==a[j])
	            {
	                r=1;
	            }
	        }
	        if(r==1)
	            continue;
	        int c = 0;
	        for(int j=i ; j<x && f<2 ; j++)
	        {
	            if(a[i]==a[j])
	            {
	                c++;
	            }
	        }
	        if(c>=2)
	        {
	            ab++;
	        }
	        for(int j=0 ; j<y && f<2 ; j++)
	        {
	            if(a[i]==b[j])
	            {
	                c++;
	            }
	        }
	        if(c==1)
	        {
	            aa++;
	        }
	        else if(c%2==1)
	        {
	            f++;
	        }
	    }
	    for(int i=0 ; i<y && f<2 ; i++)
	    {
	        int r=0;
	        for(int j=i-1 ; j>=0 ; j--)
	        {
	            if(b[i]==b[j])
	            {
	                r=1;
	                break;
	            }
	        }
	        for(int j=0 ; j<x && r==0 ; j++)
	        {
	            if(b[i]==a[j])
	            {
	                r=1;
	                break;
	            }
	        }
	        if(r==1)
	            continue;
	        int c = 0;
	        for(int j=i ; j<y ; j++)
	        {
	            if(b[i]==b[j])
	            {
	                c++;
	            }
	        }
	        if(c==1)
	        {
	            ba++;
	        }
	        else if(c>=2)
	        {
	            bb++;
	        }
	    }
	    if(f<=2 && l==0)
	        cout<<"YES"<<endl;
	    else if()
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}

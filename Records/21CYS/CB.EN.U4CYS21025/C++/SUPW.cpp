#include <iostream>
using namespace std;

int min(int a, int b, int c)
{
    if(a<b && a<c)
    {
        return a;
    }
    else if(b<c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main() {
	
	int n;
	cin >> n ;
	int arr[n];
	int dp[n];
	int ans;
	

	
	for(int i = 0 ; i < n ; i++){
	    
	    cin >> arr[i];
	}
	
	dp[0] = arr[0];
	dp[1] = arr[1];
	dp[2] = arr[2];
	
	for(int j = 3 ; j<n ; j++){
	        
	        dp[j]= min(dp[j-1],dp[j-2],dp[j-3])+arr[j];
	    
	}
	
	ans =  min(dp[n-1],dp[n-2] ,dp[n-3]);
	
	cout << ans;
	
	return 0;
}

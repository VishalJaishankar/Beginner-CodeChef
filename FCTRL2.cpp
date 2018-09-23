#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //this template is for faster in
    //enter code here
	//for a range of 100 numbers this will not work	
    int n;
     int dp[101];
    dp[0]=1;
    for(int i=1;i<101;i++)
    dp[i]=i*dp[i-1];
    
    
    cin>>n;
    for(int i=0;i<n;i++){
    	int num;
    	cin>>num;
    	cout<<dp[num]<<"\n";
	}
    
    return 0;
}

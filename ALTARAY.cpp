#include <bits/stdc++.h>
using namespace std;



int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			}
		int dp[n];
		for(int i=0;i<n;i++)
			dp[i]=1;
		
		for(int i=n-2;i>=0;i--){
			if((arr[i]>0&& arr[i+1]<0)||(arr[i]<0&& arr[i+1]>0))
				dp[i]=dp[i+1]+1;
						
		}
		for(int i=0;i<n;i++)
			cout<<dp[i]<<" ";
			
		cout<<"\n";

	}


return 0;
}



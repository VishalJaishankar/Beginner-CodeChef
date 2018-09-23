#include <bits/stdc++.h>
using namespace std;
#define f(a,b) for(int i=(int)a;i<(int)b;i++)


int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int arr[n];
		
		f(0,n){
			cin>>arr[i];
		}	
		int dp[n];
		
		f(0,n){
			dp[i]=1;	
		}
		
		f(1,n){
			if(arr[i]>=arr[i-1])
				dp[i]=dp[i-1]+1;
		}
		int count=0;
		f(0,n){
//			cout<<dp[i]<<" ";
		count+=dp[i];
		}

		/*f(0,n-1){
			if(dp[i]!=1&&dp[i+1]==1){
				count+=dp[i]*(dp[i]+1)/2;
			}
			
		}
		*/
		cout<<count<<"\n";
	}


return 0;
}



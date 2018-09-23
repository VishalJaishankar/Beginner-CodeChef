#include <bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	int mat[100][100];
	while(test--){
		int n;
		cin>>n;
		int mat[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				cin>>mat[i][j];
			}
		}
	/*	for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<"\n";
		}
	*/
	
		int dp[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				dp[i][j]=0;
			}
		}
			
		dp[0][0]=mat[0][0];
		//dp approach 
		for(int i=1;i<n;i++){
			for(int j=0;j<=i;j++){
				if(i==j)
				dp[i][j]=mat[i][j]+dp[i-1][j-1];
				
				else if(j==0){
					dp[i][j]=mat[i][j]+dp[i-1][j];
				}
				
				else{
					dp[i][j]=mat[i][j]+max(dp[i-1][j],dp[i-1][j-1]);
				}
				
				
			}
		}
	/*	for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				cout<<dp[i][j]<<" ";
			}
		cout<<"\n";
		}
	*/
		int maxINT=INT_MIN;
	
		for(int i=0;i<n;i++)
			maxINT=max(maxINT,dp[n-1][i]);
		
		
	//	cout<<endl;
		cout<<maxINT<<"\n";
	}





return 0;
}



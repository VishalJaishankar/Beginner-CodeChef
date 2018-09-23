#include <bits/stdc++.h>
using namespace std;



int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
	//	int arr[n];
		int mini=INT_MAX;int ele;
		for(int i=0;i<n;i++){
			cin>>ele;
			mini=min(mini,ele);
		}
		cout<<mini*(n-1)<<"\n";
		
	
	}


return 0;
}



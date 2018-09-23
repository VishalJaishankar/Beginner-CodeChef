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
		int count=0;
		for(int i=0;i<n;i++){
			int sum=arr[i];
			int prod=arr[i];
			for(int j=i+1;j<n;j++){
				if(sum==prod)
					count++;
				sum+=arr[j];
				prod*=arr[j];
					
			}
			if(prod==sum)
				count++;
		}
		cout<<count<<"\n";
	
	}

	

return 0;
}



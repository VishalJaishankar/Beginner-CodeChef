#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
			
		int ele=arr[0];
		for(int i=1;i<n;i++)
			ele=gcd(ele,arr[i]);
		
		for(int i=0;i<n;i++){
			cout<<arr[i]/ele<<" ";
		}	
		cout<<"\n";
		
	}
	
	
	
	


return 0;
}



#include <bits/stdc++.h>
using namespace std;

int findNear(int n){
	int iter=1;
	if((n & n-1)==0)//for powers of 2
		if(n<=2048)
			return n;
		else
			return 2048;
			
			
	while(iter<n){
		iter*=2;
		
	}
	if(iter/2>2048)
		return 2048;
	
	return iter/2;
		
}

int main(){
	int test;
	cin>>test;
	
	while(test--){
		int n;
		cin>>n;
		int count=0;
		while(n){
		n=n-findNear(n);
		count++;
		}
		cout<<count<<"\n";
	}
	
}

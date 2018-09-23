#include <bits/stdc++.h>
using namespace std;



int main(){
int test;
cin>>test;
	while(test--){
		int n,m,k;
		cin>>n>>m>>k;
		int diff=abs(n-m);
		if(diff==0||diff<=k){
		cout<<0<<"\n";
		}
		else if(diff>k){
			cout<<diff-k<<"\n";
		}
		
		

	}


return 0;
}



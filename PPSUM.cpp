#include <bits/stdc++.h>
using namespace std;
int sigma(int a){
	return a*(a+1)/2;
	
}

int solve(int d,int n){
	int a=n;
	for(int i=0;i<d;i++){
		a=sigma(a);
	}
	return a;
}

int main(){
	int test;
	cin>>test;
	
	while(test--){
		int d,n;
		cin>>d>>n;
		cout<<solve(d,n)<<"\n";
	}


return 0;
}



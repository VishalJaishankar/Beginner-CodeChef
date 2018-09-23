#include <bits/stdc++.h>
using namespace std;

int sigma(int a){
	return a*(a+1)/2;
}

int main(){
int test;
cin>>test;
	while(test--){
		int n;
		cin>>n;
	//	cout<<sigma(n)<<" ";
		if(n%2==0){
			n=n-2;
			n=n/2;
			cout<<sigma(n)<<"\n";
		}
		else{
			n=n-3;
			n=n/2;
			cout<<sigma(n)<<"\n";
		}
	}


return 0;
}



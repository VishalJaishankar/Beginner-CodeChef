#include <bits/stdc++.h>
using namespace std;
//have to take care of leading zeros
void solve(int n){
	if(n==0)
	return ;
	int temp=n%10;
	cout<<temp;
	solve(n/10);
}

void process(int n){
	//trim right
	while(n%10==0){
		n=n/10;
	}
	solve(n);
}


int main(){
int test;
cin>>test;

	while(test--){
	int n;
	cin>>n;
	process(n);
	
	cout<<"\n";
	
	
	}


return 0;
}



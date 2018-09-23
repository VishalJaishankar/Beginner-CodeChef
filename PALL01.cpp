#include <bits/stdc++.h>
using namespace std;

int getDig(int a){
	int digit=0;
	
	while(a){
		a=a/10;
		digit++;
	}
	return digit;
}

int check(int n,int dig){
	int last=10;
	int first=pow(10,dig-1);
	while(n){
		if(n%last!=n/first)
			return 0;
		n=n%first;
		n=n/10;
		first=first/100;
	}
	return 1;
}
//check if the interger is a palidrome or not
int main(){
	int test;
	cin>>test;
	
	while(test--){
		int n;
		cin>>n;
		int dig=getDig(n);
		//cout<<check(n,dig)<<"\n";		
		if(check(n,dig)==0)
		cout<<"losses"<<"\n";
		else
		cout<<"wins"<<"\n";
		
	}


return 0;
}



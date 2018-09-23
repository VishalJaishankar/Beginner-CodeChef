#include <bits/stdc++.h>
using namespace std;



int main(){
int test;
cin>>test;
while(test--){
	int n;
	cin>>n;
	int count=0;
		if(n>=100){
		count+=n/100;
		n=n%100;
		}
			if(n>=50){
		count+=n/50;
		n=n%50;
		}
			if(n>=10){
		count+=n/10;
		n=n%10;
		}
			if(n>=5){
		count+=n/5;
		n=n%5;
		}
			if(n>=2){
		count+=n/2;
		n=n%2;
		}
		if(n==1)
			count+=n;
	
	cout<<count<<"\n";
}


return 0;
}



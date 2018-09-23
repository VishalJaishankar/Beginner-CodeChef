#include <bits/stdc++.h>
using namespace std;

int check(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
	
	
	/*for(int i=2;i<a;i++){
		if(a%i==0)
		return 0;
	}
	return 1;
	*/
}

int main(){
int test;
cin>>test;
while(test--){
	int n;
	cin>>n;
	//base cases
	if(check(n)==1){
		cout<<"yes"<<"\n";
	}
	else
	cout<<"no"<<"\n";
}




return 0;
}



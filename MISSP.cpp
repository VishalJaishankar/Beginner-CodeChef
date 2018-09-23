#include <bits/stdc++.h>
using namespace std;



int main(){
int test;
cin>>test;
	while(test--){
		int n;
		int xorer=0;
		int ele;
		cin>>n;
		while(n--){
			cin>>ele;
			xorer=xorer^ele	;
		}
		cout<<xorer<<"\n";
	}


return 0;
}



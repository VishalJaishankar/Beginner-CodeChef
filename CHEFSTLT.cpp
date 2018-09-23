#include <bits/stdc++.h>
using namespace std;



int main(){
	int test;
	cin>>test;
	while(test--){
		string a,b;
		cin>>a>>b;
		int l1=a.length();
		int l2=b.length();
		int i=0;
		int mindiff=0;
		int maxdiff=0;
		while(i<l1){
			if(a[i]=='?'||b[i]=='?'){
				maxdiff++;
			}
			else if(a[i]!=b[i]){
				maxdiff++;
				mindiff++;
				
			}
			
			i++;
		}
		cout<<mindiff<<" "<<maxdiff<<"\n";
		
	}


return 0;
}



#include <bits/stdc++.h>
using namespace std;



int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int i=0;
		int red=0;int gre=0;int blu=0;
		for(int i=0;i<n;i++){
			if(s[i]=='R'){
				red++;	
			}
			if(s[i]=='B'){
				blu++;
			}
			if(s[i]=='G'){
				gre++;
			}
		}
//		int ans=min(red,min(blu,gre))+
		int maxi=max(red,max(blu,gre));
		int ans=red+blu+gre-maxi;
		cout<<ans<<"\n";

	}

return 0;
}



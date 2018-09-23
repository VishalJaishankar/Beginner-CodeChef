#include <bits/stdc++.h>
using namespace std;
#define f(a,b) for(int i=(int)a;i<(int)b;i++)

int get(string s){
	int len=s.length();
	int ans=0;
	int maxi=INT_MIN;
	f(0,len){
		if(s[i]=='('){
			ans++;
			maxi=max(maxi,ans);		
		}
		else
			ans--;
	}
	return maxi;
	
}

int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		
		int balance=get(s);
		f(0,balance){
			cout<<'(';
		}
		f(0,balance){
			cout<<')';
		}
	cout<<"\n";
	}


return 0;
}



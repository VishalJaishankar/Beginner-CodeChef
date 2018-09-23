#include <bits/stdc++.h>
using namespace std;



int main(){

		map<char,int> m;
		string s;
		cin>>s;
		int l=s.length();
		for(int i=0;i<l;i++)
			m[s[i]]++;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			string t;
			int suc=1;
			cin>>t;
			int len=t.length();
			for(int i=0;i<len;i++){
				if(m.find(t[i])==m.end()){
					suc=0;
					break;
				}
			}
			if(suc){
				cout<<"Yes"<<"\n";
			}
			else
				cout<<"No"<<"\n";
		
		}


return 0;
}



#include <bits/stdc++.h>
using namespace std;



int main(){

	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int arr[26];
		for(int i=0;i<26;i++)
			arr[i]=0;
			
		int l=s.length();
		if(l%2==1){
			cout<<"NO"<<"\n";
			continue;
		}
		int find=l/2;
		int i=0;
		while(i<l){
			arr[s[i]-'a']++;
			i++;
		}
		int suc=0;
		for(int i=0;i<26;i++)
			if(arr[i]==find){
				suc=1;
				break;
			}
		if(suc){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
		
	}



return 0;
}



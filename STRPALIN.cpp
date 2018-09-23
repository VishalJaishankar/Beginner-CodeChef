#include <bits/stdc++.h>
using namespace std;
#define f(a,b) for(int i=(int)a;i<(int)b;i++)



int main(){
	int test;
	cin>>test;
	while(test--){
		string s1,s2;
		cin>>s1>>s2;
		map<char,int> map1;
	//	map<char,int> map1;
		int len1=s1.length();
		int len2=s2.length();
		f(0,len1){
			map1[s1[i]]++;
		}
		int suc=0;
		f(0,len2){
			if(map1.find(s2[i])!=map1.end()){
				suc=1;
				break;
			}
		}
		if(suc){
			cout<<"Yes"<<"\n";
			}
		else{
			cout<<"No"<<"\n";
		}
		
	}


return 0;
}



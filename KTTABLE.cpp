#include <bits/stdc++.h>
using namespace std;



int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int table[n];
		for(int i=0;i<n;i++){
			cin>>table[i];
		}
		int time[n];
		for(int i=0;i<n;i++){
			cin>>time[i];
		}	
		int count=0;
		int start=0;
		for(int i=0;i<n;i++){
			if(table[i]-start>=time[i])
			count++;
			start=table[i];
		}
		cout<<count<<"\n";
	}


return 0;
}



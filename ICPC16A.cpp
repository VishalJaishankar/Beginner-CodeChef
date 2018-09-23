#include <bits/stdc++.h>
using namespace std;



int main(){
	int test;
	cin>>test;
	while(test--){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		if(x1==x2){
			if(y1>y2){
				cout<<"down"<<"\n";
				continue;
			}
			else{
				cout<<"up"<<"\n";
				continue;
			}
		}
		else if(y1==y2){
			if(x1>x2){
				cout<<"left"<<"\n";
				continue;
			}
			else{
				cout<<"right"<<"\n";
			}
		}
		else{
			cout<<"sad"<<"\n";
		}
		
	}


return 0;
}



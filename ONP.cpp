#include <bits/stdc++.h>
using namespace std;
//convert to prefix notation
int prec(char c){
	if(c=='+'||c=='-')
		return 1;
	if(c=='*'||c=='/')
		return 2;
	if(c=='^')
		return 3;
}

int isOperator(char c){
	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
		return 1;
	else
		return 0;
}
int main(){
		int test;
		cin>>test;
		while(test--){
			string s;
			cin>>s;
			//do this later
		}


return 0;
}



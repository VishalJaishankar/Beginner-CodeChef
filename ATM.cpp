#include <bits/stdc++.h>
using namespace std;


int main(){
	int x;
	cin>>x;
	double d;
	cin>>d;
	if(d<x){
	cout << std::fixed;
    cout << std::setprecision(2);
    cout << d;
    return 0;
	}
	else if(x%5==0){
		d=d-x-0.5;
		cout << std::fixed;
    	cout << std::setprecision(2);
    	cout << d;
    	return 0;
	}
	else{
		cout << std::fixed;
    	cout << std::setprecision(2);
    	cout << d;
    	return 0;
	}
	
}

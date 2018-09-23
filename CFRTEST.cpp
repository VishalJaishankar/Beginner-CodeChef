#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

//for some reason set is not comptible...stupid compiler
//find maximum unique numbers in set
//trying to us unorder_set to store and check
int main(){
	int test;
	cin>>test;
	while(test--){
		set<int> bag;
		int n;
		cin>>n;
		int ele;
		int count=0;
		for(int i=0;i<n;i++){
			bag.insert(ele);
		}
		cout<<bag.size();
	}


return 0;
}



#include <bits/stdc++.h>
using namespace std;



int main(){
	
		while(1){
		int n;
		cin>>n;
		if(n==0)
		break;
		
		int arr[n];
		for(int i=1;i<=n;i++){
			cin>>arr[i];
		}
		int suc=1;
		for(int i=1;i<=n;i++){
			if(arr[i]!=i && arr[arr[i]]!=i){
				//cout<<"not";
				//return 0;
				suc=0;
			}
		
			
			
		}
		if(suc)
		cout<<"ambiguous"<<"\n";
		else
		cout<<"not ambiguous"<<"\n";
		
	}

return 0;
}



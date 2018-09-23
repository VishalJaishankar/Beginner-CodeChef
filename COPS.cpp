#include <bits/stdc++.h>
using namespace std;



int main(){
	int test;
	cin>>test;
	while(test--){
		int m,x,y;
		cin>>m>>x>>y;
		int arr[101];
		memset(arr,0,sizeof(arr));
		int dist=x*y;
		int house;
		for(int i=0;i<m;i++){
			cin>>house;
			int left=house-x*y;
			int right=house+x*y;
			if(left<1)
				left=1;
			if(right>100)
				right=100;
			
			for(int i=left;i<=right;i++)
				arr[i]=1;
			
		}
	//	for(int i=1;i<=100;i++)
		//	cout<<arr[i]<<" ";
		//cout<<"\n";
		int count=0;
		for(int i=1;i<=100;i++)
			if(arr[i]==0)
				count++;
		
		cout<<count<<" ";
	}


return 0;
}



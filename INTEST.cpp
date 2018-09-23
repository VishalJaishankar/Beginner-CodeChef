#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //this template is for faster in
    //enter code here	
    int k,n,num;
    int count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
    	cin>>num;
    	if(num%k==0)
    	count++;
	}
    	cout<<count;
    
    return 0;
}

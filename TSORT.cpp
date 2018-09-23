#include <bits/stdc++.h>
using namespace std;

bool cmp(const int a,const int b){
	return a>b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //this template is for faster in
    //enter code here	
    int n;
    cin>>n;
    int  v[n];
    for(int i=0;i<n;i++){
    	cin>>v[i];
	}
    sort(v,v+n,cmp);
    for(int i=0;i<n;i++)
    	cout<<v[i]<<" ";
    return 0;
}

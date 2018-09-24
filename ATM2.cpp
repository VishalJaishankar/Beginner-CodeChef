#include <bits/stdc++.h>
using namespace std;


int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

        int i=0;
        while(i<n){
            if(arr[i]<=k){
                cout<<"1";
                k=k-arr[i];
            }
            else{
                cout<<"0";

            }
        i++;
        }
        cout<<"\n";
    }

}
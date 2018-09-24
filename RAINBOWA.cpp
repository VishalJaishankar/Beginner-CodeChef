#include <bits/stdc++.h>
using namespace std;


int check(int * arr,int n){
    int count[8];
    memset(count,0,sizeof(count));
    int s=0;
    int e=n-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        count[arr[s]]++;

        s++;
        e--;
    }
    for(int i=1;i<=7;i++){
        if(count[i]==0)
            return 0;
        
    }
    return 1;
}

int main(){
    int test;cin>>test;
    while(test--){
            int n;cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
            cin>>arr[i];

            if(check(arr,n)==1){
                cout<<"yes"<<"\n";
            }
            else{
                cout<<"no"<<"\n";
            }
    }
}
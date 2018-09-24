#include <bits/stdc++.h>
using namespace std;
//constructive algorithm

int main(){
    int test;cin>>test;
    while(test--){
        int n,k;cin>>n>>k;
        int cost=0;//the total cost
        //k remaining time the traverse
        for(int i=0;i<n;i++){
                int t,c;cin>>t>>c;
                if(k-t>=0){
                    k=k-t;
                    continue;
                }
            int rem=t-k;
            k=0;
            cost+=rem*c;
        
        }
        cout<<cost<<"\n";

    }


}
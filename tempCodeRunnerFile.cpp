#include <bits/stdc++.h>
using namespace std;
#define lli long long int 

int main(){
    int test;cin>>test;
    while(test--){
        lli c,d,l;cin>>c>>d>>l;
        if(l%4!=0){
            cout<<"no"<<"\n";
            continue;
        }
        
        lli maxi=(c+d)*4;
        lli mini;
        if(2*d>=c){//if each dog takes two cats then how many remaining
                mini=d*4;
        }
        else{
            c=c-d*2;
            mini=(d+c)*4;
        }
        if(l>=mini && l<=maxi)
            cout << "yes"<<"\n";
        else{
            cout<<"no"<<"\n";
        }
    }
}
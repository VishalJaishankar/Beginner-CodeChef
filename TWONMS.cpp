#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int test;
    cin>>test;
    while(test--){
        int a,b,n;
        cin>>a>>b>>n;
        //if n is even it will not make any difference when both are divided
        //if n is odd then,when divided a will have an extra 2 multiplied
        if(n%2==0){
            cout<<max(a,b)/min(a,b)<<"\n";
            continue;
        }
        else{
            cout<<max(2*a,b)/min(2*a,b)<<"\n";
            continue;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
          
            int l,b;
            cin>>l>>b;
    int take=1;
        while(l>=0 && b>=0){
            l-=take;
            take++;
            if(l<0){
                cout<<"Bob"<<"\n";
                break;
            }
            b-=take;
            take++;
            if(b<0){
                cout<<"Limak"<<"\n";
                break;
            }
        
        }

        
    }
}
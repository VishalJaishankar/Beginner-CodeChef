#include <bits/stdc++.h>
using namespace std;
bool comp(const int a,const int b){
    return (a>b);
}
//giving wrong answer ....check for bugs 
int main(){
    int test;cin>>test;
    while(test--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n,comp);
//        for(int i=0;i<n;i++)
  //          cout<<arr[i]<<" ";
        int l=0;int b=0;
        for(int i=0;i<n-1;){
            if(arr[i]==arr[i+1]){
                    if(l==0){
                        l=arr[i];
                        i+=2;
                        //this is needed ...forgot this try case (2 2 2 1 1)
                        }
                    else{
                        b=arr[i];
                        break;
                    }
            }
            else{
                i++;
            }
        }
        if(l==0 || b==0){
            cout<<"-1"<<"\n";
        }
        else{
            cout<<l*b<<"\n";
        }

    }


}
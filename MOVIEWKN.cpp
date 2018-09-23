#include <bits/stdc++.h>
using namespace std;



int main(){
	int test;
	cin>>test;
	//arrange the input format and do it ...this is the jist of what is to be done
	while(test--){
			int n;
			cin>>n;
			int l,r;
			int maxp=INT_MIN;
			int maxl,maxr;
			int index;
			for(int i=0;i<n;i++){
				cin>>l>>r;
				if(l*r>maxp){
					index=i;
					maxl=l;
					maxr=r;	
				}
				else if(l*r==maxp){
					if(r>maxr){
						index=i;
						maxr=r;
						maxl=l;
					}
					
				}
			}
	}


return 0;
}



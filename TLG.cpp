#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	int W;
	int diff=0;
	int p1,p2;
	
	/*cin>>p1>>p2;
	diff=p1-p2;
	if(diff<0){
		W=2;//if p2 has a bigger score
		
	}
	else
		W=1;
	*/
	int cum1=0;
	int cum2=0;
	for(int i=0;i<n;i++){
		cin>>p1>>p2;
		cum1+=p1;
		cum2+=p2;
		if(cum1<cum2 && abs(cum1-cum2)>abs(diff)){
			W=2;
			diff=cum1-cum2;
		}
		else if (cum1>cum2 && abs(cum1-cum2)>abs(diff)){
			W=1;
			diff=cum1-cum2;
		}
	}
	cout<<W<<" "<<abs(diff);
	
	
}





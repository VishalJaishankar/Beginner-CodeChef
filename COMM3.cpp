#include <bits/stdc++.h>
using namespace std;

double dist(int x1,int y1,int x2,int y2){
	return (sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
	
}

int main(){
int test;
cin>>test;

	while(test--){
	double r;
	cin>>r;
//	cout<<r;
	int cx,cy,hx,hy,sx,sy;
	cin>>cx>>cy;
	cin>>hx>>hy;
	cin>>sx>>sy;
	
//	cout<<dist(cx,cy,hx,hy)<<"\n";
//	cout<<pow(-2,2);
	double inter=dist(hx,hy,sx,sy);
	
//	if(dist(cx,cy,hx,hy)>r&&dist(cx,cy,sx,sy)>r  )
//		cout<<"no"<<"\n";
	if(inter<=r && (dist(cx,cy,hx,hy)<=r||dist(cx,cy,sx,sy)<=r))
		cout<<"yes"<<"\n";
	else if(dist(cx,cy,hx,hy)<=r && dist(cx,cy,sx,sy)<=r)
		cout<<"yes"<<"\n";
		
	else{
		cout<<"no"<<"\n";
	}
	}

return 0;
}



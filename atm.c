#include <stdio.h>


int main(){
	int x;
	float curr;
	scanf("%d %f",&x,&curr);
	if((int)curr<x || x%5!=0){
		printf("%.2f",curr);
	}
	else if(x%5==0){
		printf("%.2f",curr-x-0.5);
	}
	
	



}

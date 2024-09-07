#include <stdio.h>

main(){
	
	// simple intrest
	float p,r,t,SI;
	
	printf("enter the p: ");
	scanf("%d",&p);
	
	printf("enter the r: ");
	scanf("%d",&r);
	
	printf("enter the t: ");
	scanf("%d",&t);
	
	SI = (p*r*t)/100;
	
	printf("the simple intrest is : %f", SI);
}

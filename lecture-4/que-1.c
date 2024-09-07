#include <stdio.h>

main(){
	
	// a+b square , a-b square , a+b cube
	
	int a, b, result1 ,result2, result3;
	
	printf("enter the value of a : ");
	scanf("%d", &a);
	
	printf("enter the value of b : ");
	scanf("%d", &b);
	
	result1 = (a+b)*(a+b); // a+b whole square
	
	result2 = (a-b)*(a-b); // a-b whole square
	
	result3 = (a+b)*(a+b)*(a+b); // a+b whole cube
	
	printf("the (a+b)^2 of %d\n\n",result1);
	printf("the (a-b)^2 of %d\n\n",result2);
	printf("the (a+b)^3 of %d",result3);
}

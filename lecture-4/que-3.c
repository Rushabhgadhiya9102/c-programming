#include <stdio.h>

main(){
	
	// swapping without using third variable
	
	int a, b;
	
	printf("enter the value of a: ");
	scanf("%d",&a);
	
	printf("enter the value of b: ");
	scanf("%d",&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("the swapping value of a: %d\n\n",a);
	printf("the swapping value of b: %d",b);
}

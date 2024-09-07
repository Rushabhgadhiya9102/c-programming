#include <stdio.h>

main() {
	
	//swapping using third  variable
	
	int a ,b ,c;
	
	printf("enter the value of a: ");
	scanf("%d",&a);
	
	printf("enter the value of b: ");
	scanf("%d",&b);
		
	c=a;
	a=b;
	b=c;
	
	printf("the swapping value of a:%d\n\n", a);
	printf("the swapping value of b:%d\n\n", b);
	printf("the swapping value of c:%d", c);
}

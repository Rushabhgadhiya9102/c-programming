#include <stdio.h>

main(){
	
	int a,b,min;
	printf("Enter the first number: ");
	scanf("%d",&a);
	
	printf("Enter the second number: ");
	scanf("%d",&b);
	
	if(a<b){
	    min=a;
	}else{
		min=b;
	}
	
	printf("the minimum value is : %d",min);
}

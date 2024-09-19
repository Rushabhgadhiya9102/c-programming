#include <stdio.h>

main(){
	
	int num1,num2=0;
	
	printf("enter the number: ");
	scanf("%d",&num1);
	
	while(num1!=0){
		
		num1/=10;
		num2++;
	}
	printf("the total number of digits: %d",num2);
}

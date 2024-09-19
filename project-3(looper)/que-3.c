#include <stdio.h>

main(){
	
	int num1,num2,num3,result;
	
	printf("enter the number: ");
	scanf("%d",&num1);
	
	num3=num1%10;
	
	while(num1>=10){
		
		num1/=10;
	}
	
	num2=num1;
	
	result=num2+num3;
	
	printf("the sum of first and last digit are: %d",result);

}

#include <stdio.h>

main(){
	
	int num1,num2,num3,result;
	
	printf("enter the number: "); // take input from the user
	scanf("%d",&num1);
	
	num3=num1%10;  // modulas of num1 which is store in num3
	
	while(num1>=10){  // check the condition 
		
		num1/=10;  // divided by 10 until its less than 10
	}
	
	num2=num1;  // assinged num2 the value of num1
	
	result=num2+num3;  // sum of num2 and num3
	
	printf("the sum of first and last digit are: %d",result); // print the result

}

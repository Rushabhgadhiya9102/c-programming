#include <stdio.h>

main(){
	int num1, num2, num3, result;
	
	printf("Enter the first number: ",num1);
	scanf("%d",&num1);
	
	printf("Enter the first number: ",num2);
	scanf("%d",&num2);
	
	printf("Enter the first number: ",num3);
	scanf("%d",&num3);
	
	result= num3<(num1<num2?num1:num2)?num3:((num1<num2)?num1:num2);
	
	printf("the minimum value is : %d",result);
}

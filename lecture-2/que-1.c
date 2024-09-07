#include <stdio.h>

main(){
	int num1,num2,sum,sub,multi,div,mod;
	
	num1=12;
	num2=6;
	
	sum = num1+num2;
	sub = num1-num2;
	multi = num1*num2;
	div = num1/num2;
	mod = num1%num2;
	
	printf("Addition is : %d\n", sum);
	printf("Substraction is : %d\n", sub);
	printf("Multiplication is : %d\n", multi);
	printf("Division is : %d\n", div);
	printf("Modulas is : %d", mod);
}

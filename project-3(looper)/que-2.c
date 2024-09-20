#include <stdio.h>

main(){
	
	int num1,num2=0; // assigned 0 value to num2
	
	printf("enter the number: ");  // take input from user in num1
	scanf("%d",&num1);
	
	while(num1!=0){  // check the condition 
		
		num1/=10;  // divided by 10 until its 0
		num2++;    // increased by 1  
	}
	printf("the total number of digits: %d",num2); // print the num2 as output
}

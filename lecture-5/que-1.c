#include <stdio.h>

main(){
	
	float celsius, fahrenheit;
	
	printf("enter the value of celsius: ");
	scanf("%f",&celsius);
	
	fahrenheit = (celsius*9/5)+32;
	
	printf("the temperature in fahrenheit: %.2f", fahrenheit);
	
}

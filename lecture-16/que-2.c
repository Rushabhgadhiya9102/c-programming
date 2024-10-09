#include <stdio.h>

// -------------------------- CUSTOM MADE FUNCTION ------------------------------------

int div(int a){
	
	if(a%3 == 0 && a%5 == 0){  // CHECK WEATHER THE GIVEN NUMMBER IS DIVISIBLE BY BOTH 3 AND 5
	
		printf("the number is divisible by 3 and 5");  		// TRUE
		
	}
	else{
		
		printf("the number is not divisible by 3 and 5"); 		// FALSE
		
	}
}

// ------------------------------ MAIN FUNCTION  -----------------------------------

main(){
	
	int num1;  // DECLARE THE VARIABLE
	
	printf("enter the number: ");     // ENTER THE NUMBER
	scanf("%d",&num1);
	
	div(num1);		// CALLING THE DIV FUNCTION
}

#include <stdio.h>

// --------------------------- CUSTOM MADE FUNCTION ------------------------

int cube(int a){
	int cube;   // DECLARE THE VARIABLE
	
	cube = a*a*a;  // CUBE OF THE GIVEN NUMBER
	
	printf("the cube of %d : %d",a,cube);	// PRINT THE NUMBER
}

// ---------------------------- MAIN FUNCTION --------------------------------

main(){
	
	int num1;  // DECLARE THE VARIABLE
	
	printf("enter the number: ");  // ENTER THE NUMBER
	scanf("%d",&num1);
	
	cube(num1);  // CALLING THE FUNCTION
	
}

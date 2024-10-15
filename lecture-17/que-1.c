#include <stdio.h>

// ----------------------------- CUSTOM MADE FUNCTION ------------------------------

int arrsum(int a){
	
	int i ,sum;   // DECLARE THE VARIABLE
	
	printf("enter the size:"); 		// ENTER THE SIZE
	scanf("%d",&a);
	
	int arr[a];
	
	for(i=0; i<a; i++){  		// OUTER LOOP 
		
		printf("enter the element arr[%d]: ", i); 		// ENTER THE ELEMENT
		scanf("%d",&arr[i]);
		
		sum += arr[i];				// SUM VARIABLE STOREED THE VALUE AND PLUS ARR[I] ON EACH ITERATON
	}
	
	printf("%d", sum); 			// PRINT SUM
		
}

// ----------------------------- MAIN FUNCTION ------------------------------- 

int main(){
	
	int num1;		// DECLARE THE VARIABLE
	arrsum(num1);  		// CUSTOM FUNCTION CALL  
	
	return 0;
}

#include <stdio.h>

main(){
	
	int i,j,k; //DECLARE THE VARIABLE
	
	for(i=5; i>=1; i--){  // OUTER LOOP
		
		for(k=1; k<=i; k++){ // INNER LOOP FOR WHITE SPACE
			printf("  ");
		}
		
		for(j=i; j<=5; j++){ // INNER LOOP FOR PRINT
			
			printf("%d ",j);  // PRINT THE VALUE OF J
		}
		
		printf("\n");  // USE TO BREAK LINE AFTER FINISHING THE ITERATION OF INNER LOOP
	}
}

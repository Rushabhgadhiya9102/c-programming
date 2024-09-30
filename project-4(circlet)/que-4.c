#include <stdio.h>

main(){
	
	int i,j,k; //DECLARE VARIABLE
	
	for(i=5; i>=1; i--){ // OUTER LOOP
		
		for(k=5; k>=i; k--){ // INNER LOOP FOR WHITE SPACE
			printf("  ");
		}
		
		for(j=1; j<=i; j++){  // INNER LOOP FOR PRINT 
			printf("%d ",j%2);
		}
		
		printf("\n"); // USE TO BREAK LINE AFTER FINISHING THE ITERATION OF INNER LOOP
	}
	
}

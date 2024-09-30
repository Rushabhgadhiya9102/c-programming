#include <stdio.h>

main(){
	
	int i, j, k; //DECLARE VARIABLE
	
	for(i=1; i<=5; i++){ // OUTER LOOP
		
		for(j=1; j<=i; j++){  // INNER LOOP FOR PRINT
			printf("%d ",j); 
		}
		
		for(k=5; k>i; k--){  // INNER LOOP FOR WHITE SPACE
			printf("  ");
		}
		
		for(k=5; k>i; k--){  // INNER LOOP FOR WHITE SPACE
			printf("  ");
		}
		
		for(j=i; j>=1; j--){  // INNER LOOP FOR PRINT
			printf("%d ",j);
		}
		
		printf("\n");  // USE TO BREAK LINE AFTER FINISHING THE ITERATION OF INNER LOOP
	}
}

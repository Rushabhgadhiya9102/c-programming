#include <stdio.h>

main(){
	
	int i,j;   // DECLARE THE VARIABLE
	
	for(i=1; i<=5; i++){  // OUTER LOOP START FROM 1
		
		for(j=41; j<=41+i-1; j++){   // INNER LOOP START FROM 41
			printf("%d ",j); 		 // PRINT THE VALUE OF J IN INTEGER
		}
		
		printf("\n");   // USE TO BREAK LINE AFTER FINISHING THE ITERATION OF INNER LOOP
	}
}

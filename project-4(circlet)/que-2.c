#include <stdio.h>

main(){
	
	int i,j, num=11; //DECLARE THE VARIABLE 
	
					 // NUM VARIABLE HOLD THE VALUE 11
	
	for(i=1; i<5; i++){  // OUTER LOOP
		
		for(j=1; j<=i; j++){  // INNER LOOP
			
			printf("%d ",num);  // PRINT THE VALUE OF NUM VARIABLE
			num++;   			// NUM VARIABLE IS INCREASED BY 1 AFTER PRINTING STATEMENT
		}
		
		printf("\n");  // USE TO BREAK LINE AFTER FINISHING THE ITERATION OF INNER LOOP
	}
}

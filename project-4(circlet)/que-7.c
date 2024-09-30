#include <stdio.h>

main(){
	
	int i; // DECLARE VARIABLE
	
	for(i=1; i<=5; i++){ // OUTER LOOP
		
		if(i == 1 || i == 3){     // USING CONDITIONAL STATEMENT WITH THE HELP OF 'OR' OPERATOR 
			printf("* * * * *");
		}else if(i == 2){
			printf("*       *");
		}else if(i == 4 || i == 5){
			printf("*");
		}
		
		printf("\n"); // USE TO BREAK LINE AFTER FINISHING THE ITERATION OF INNER LOOP
	}
	
}

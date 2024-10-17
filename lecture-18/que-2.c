#include <stdio.h>

void main() {
	
	char file_name[15];		// DECLARE THE VARIABLE
	char mode[2];
	int number;
	
	printf("enter the file name to extract the info: ");		// ENTER THE FILE NAME
 	scanf("%s", &file_name);
	
	printf("enter the extract file mode: ");		// ENTER THE FILE MODE
	scanf("%s", &mode);
	
	FILE *ptr = fopen(file_name, mode);	 		// FILE OPEN
	
	if( ptr == NULL){
		printf("the file is empty");		// IF FILE IS EMPTY THEM THE IS NOT OPEN
	}
	
	for(number = 1; number <=50; number++){ 		// LOOP FOR PRINT NUMBER 1 TO 50
		
		if(number % 3 == 0 && number % 5 == 0 ){	// NUMBER IS DIVISIBLE BY BOTH 3 AND 5
			fprintf(ptr, "%d\n", number);			// PRINT IN THE FILE
			printf("successfully written");
		}
	}
	
}

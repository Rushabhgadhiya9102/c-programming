#include <stdio.h>

void main () {
	
	char file_name[15];		// DECLARE THE VARIABLE
	char mode[2];
	char container[1000];
	
	printf("enter the file name to extract the info: ");		// ENTER THE FILE NAME WHICH USER WANT TO EXTRACT
 	scanf("%s", &file_name);
	
	printf("enter the extract file mode: ");		// ENTER THE FILE MODE WHICH USER WANT TO EXTRACT
	scanf("%s", &mode);
	
	FILE *ptr = fopen(file_name, mode);			// EXTRACTING FILE
	
	
	
	printf("\nenter the re-write file name: ");		// ENTER THE FILE NAME WHICH USER WANT TO RE-WRITE
	scanf("%s", &file_name);
	
	printf("enter the re-write file mode: ");		// ENTER THE FILE MODE WHICH USER WANT TO RE-WRITE
	scanf("%s", &mode);
	
	FILE *ptr2 = fopen(file_name, mode);			// RE-WRITE FILE
	
	
	
	if(ptr == NULL){		// IF FILE IS EMPTY THEM THE IS NOT OPEN
		
		printf("the file is not exist");
	}else{
		
		printf("the file 1 is successfully open \n\n");		// THE FILE IS OPEN
		
		while(fgets(container, 10, ptr) != NULL){			// LOOP FOR EXTRACT AND RE-WRITE THE INFO
		 fputs(container, ptr2);		
		}
		
		printf("the file 2 is successfully re-write"); 		// SUCCESSFUL STATEMENT IS PRINT
	}
	
}

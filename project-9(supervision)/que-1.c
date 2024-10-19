#include <stdio.h>

int main (){
	
	int i;		// DECLARE THE VARIABLE

	FILE *oddfile, *evenfile;		// FILE POINTER DECLARE
	
	oddfile = fopen("oddfile.txt","w");		// ODD FILE OPEN
	
	if(oddfile == NULL){
		printf("the file is empty or does not exist");		// CHECK THE CONDITION OF ODD FILE
	}
	
	evenfile = fopen("evenfile.txt","w");		// EVEN FILE OPEN
	
	if(evenfile == NULL){
		printf("the file is empty or does not exist");		// CHECK THE CONDITION OF EVEN FILE
	}
	
	for(i=50; i<=70; i++){		// FOR LOOP START FROM 50 TO 70
		
		if(i%2 == 0){
			fprintf(evenfile,"%d\n",i);		// PRINT EVEN NUMBER
		}else{
			fprintf(oddfile,"%d\n",i);		// PRINT ODD NUMBER
		}
	}
	
	printf("the file is successfully created");		// CONFIRM MESSAGE PRINT
	
	return 0;
}

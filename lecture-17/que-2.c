#include <stdio.h>

// ----------------------- CUSTOM MADE FUNCTION ------------------------

int length(char str[100]){
	
	int len;  	// DECLARE THE VARIABLE
	
	while(str[len] != '\0'){		// WHILE LOOP TO CALCULATE THE LENGTH
			
			len++;
			
			} 	
	
	printf("%d",len);		// PRINT THE LENGTH

}

// ----------------------- MAIN FUNCTION START --------------------------

int main(){
	
	char name[100];  	// DECLARE THE VARIABLE
	
	printf("enter the string: ");		// ENTER THE STRING
	scanf("%s",&name);
	
	length(name);		// CALL CUSTOM FUNCTION 
	
	return 0;
}

// ----------------------- MAIN FUNCTION END -------------------------

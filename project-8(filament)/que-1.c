#include <stdio.h>

int main(){
	
	char str[100];
	char *ptr = str;			// DECLARE THE VARIABLE
	int length; 
	
	printf("enter the string: ");		// ENTER THE STRING
	scanf("%[^\n]s", &str);
	
	for(length = 0; str[length] != '\0'; length++);			// FOR LOOP TO FIND LENGTH
		

	printf("%d", length);  		// PRINT THE VALUE
	
}

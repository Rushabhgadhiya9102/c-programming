#include <stdio.h>
#include <string.h>
main(){
	
	char str[50];
	
	printf("Enter the string: ");
	scanf("%s",&str);
	
	printf("upper case string: %s", strupr(str));
	
}

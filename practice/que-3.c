#include <stdio.h>
#include <string.h>
main(){
	
	char str[50];
	
	printf("Enter the string: ");
	scanf("%s",&str);
	
	printf("lower case string: %s", strlwr(str));
	
}

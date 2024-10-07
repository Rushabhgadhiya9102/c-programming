#include <stdio.h>

main(){
	
	char string[100];
	int i,length,j=0;
	
	printf("enter the string: ");
	scanf("%s",&string);
	
	for(length=0; string[length] !='\0'; length++);
	
	printf("the length of the %s: %d\n",string, length);
	
	for(i=0; i<length/2; i++){
		if(string[i] != string[length-i-1]){
			j=1;
		}
	}
	
	if(j == 0){
		printf("%s is palindrome",string);
	}else{
		printf("%s is not palindrome",string);
		}

}


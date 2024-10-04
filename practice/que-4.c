#include <stdio.h>

// upper case without using string function

main(){
	
	int i;
	char str[1000];
	printf("enter the string: ");
	scanf("%s",&str);
	
	for(i=0; str[i]!='\0'; i++){
		
		if(str[i]>='a' && str[i]<='z'){
			str[i] -= 32;
		}
	}
	
	printf("%s",str);
}

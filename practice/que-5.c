#include <stdio.h>

// lower case without using string function

main(){
	
	int i;
	char str[1000];
	printf("enter the string: ");
	scanf("%s",&str);
	
	for(i=0; str[i]!='\0'; i++){
		
		if(str[i]>='A' && str[i]<='Z'){
			str[i] += 32;
		}
	}
	
	printf("%s",str);
}

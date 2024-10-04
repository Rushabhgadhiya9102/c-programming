#include <stdio.h>

main(){
	
	char str[100];
	int i;
	
	printf("Enter the string: ");
	scanf("%s",&str);
	
	for(i=0; str[i]!='\0'; i++){
		
		if(str[i]>='A' && str[i]<='Z'){
			str[i] += 32;
		}
	}
	
	printf("%s",str);
}

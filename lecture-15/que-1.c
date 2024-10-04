#include <stdio.h>
#include <string.h>

main(){
	
	char password[100], lowercase, uppercase, specialcase, digit;
	
	int length,i;
	
	printf("Enter the password: ");
	scanf("%s", &password);
	
	length = strlen(password);
	
	for(i=0; i<length; i++){
		
		if(password[i]>='a' && password[i]<='z'){
			lowercase = password[i];
			
		} else if (password[i]>='A' && password[i]<='Z'){
			uppercase = password[i];
			
		} else if (password[i]>='0' && password[i]<='9'){
			digit = password[i];
			
		} else if (password[i] == '@'){
			specialcase = password[i];	
		}
	}
	
	if(length >= 7 && lowercase && uppercase && digit || specialcase){
		printf("strong passowrd");
		
	} else {
		printf("weak password");
	}
}

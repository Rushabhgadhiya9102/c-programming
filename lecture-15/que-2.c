#include <stdio.h>
#include <string.h>

main(){
	
	char userid[20];
	char userpass[20];
	char myid[20] = "admin@gmail.com";
	char mypass[20] = "12345";
	
	printf("Enter the user id : ");
	scanf("%s", &userid);
	
	printf("Enter the user password : ");
	scanf("%s", &userpass);
	
	if(strcmp(myid,userid) == strcmp(mypass,userpass)){
		
		printf("Login Successful...");
		
	} else {
		
		printf("Login Failed. Invalid Credentials.");
		
	}
}

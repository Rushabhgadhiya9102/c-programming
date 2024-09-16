#include <stdio.h>

main(){
	
	int i = 1;
	int n;
	printf("enter the number: "); // take input form the user
	scanf("%d",&n);
	
	while(i<=n){ // check the condition
		
		printf("%d\n",i); // print msg
		
		i++; // value is increased by 1
	}
}

#include <stdio.h>

main(){
	
	int i = 1;
	int n;
	printf("enter the number: "); // take input form the user
	scanf("%d",&n);
	
	while(n>=1){ // check the condition
	    
	    if(n%2!=0){
	    	printf("%d\n",n);  // again check condition
		}
		
		n--; // value is decreased by 1
	    
	}
}

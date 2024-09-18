#include <stdio.h>

main(){
	
	int n,i,factor=1;
	
	printf("enter the number: ");
	scanf("%d",&n);
	
	for( i=1; i<=n; i++){
		
		factor *= i;
	}
	
	printf("the factor is: %d",factor);

}

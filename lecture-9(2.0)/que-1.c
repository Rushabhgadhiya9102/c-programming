#include <stdio.h>

main(){
	int n,i,sum=0;
	
	printf("enter the number: ");
	scanf("%d",&n);
	
	for (i = 1; i<=n; i++){
		sum+=i;
	}
	
	printf("the sum of all numbers is: %d\n",sum);
}

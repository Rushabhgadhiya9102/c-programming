#include <stdio.h>

main(){
	
	int ans,n,i=1;
	
	printf("enter the number: ");
	scanf("%d",&n);
	
	do{
		
		ans=n*i;
		printf("%d x %d : %d \n", n,i,ans);
		i++;
				
	}while(i<=10);
}

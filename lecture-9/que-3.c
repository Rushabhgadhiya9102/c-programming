#include <stdio.h>

main (){
	
	int n,i=2;
	
	printf("enter the number :");
	scanf("%d",&n);
	
	do{
		
	   if(i%2==0){
	   	printf("%d\n",i);
	   }
	   
	   i++;
	   
	}while(i<=n);

}

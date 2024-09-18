#include <stdio.h>

main(){
	
	int n1=0,n2=1,i,num;
	 printf("Enter  a number:");
     scanf("%d",&num);
     printf("%d %d",n1,n2);
	
	 for(i=2 ; i<num ; i++)
  {
      	int n3=n1+n2;
    	printf(" %d",n3);
    	n1=n2;
    	n2=n3;
  }
}

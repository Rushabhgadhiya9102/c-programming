#include <stdio.h>

main(){
	int a;
	
	printf("enter the number : ");
	scanf("%d",&a);
	
	if(a<0){
		printf("the value is negative",a);
	}else if(a>0){
		printf("the value is positive",a);
	}else{
		printf("the value is neutral",a);
	}
}

#include <stdio.h>

main(){
	
	int i, j, size, element;
	
	printf("enter the size: ");
	scanf("%d",&size);
	
	for(i=0; i<size; i++){
		
		printf("enter the number arr[%d]: ",i);
		scanf("%d",&element);
	}
	
	printf("the length of the array: %d",size);
}

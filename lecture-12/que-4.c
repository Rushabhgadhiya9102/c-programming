#include <stdio.h>

main(){
	
	int i, j, size, element, sum;
	float average;
	
	printf("enter the size: ");
	scanf("%d",&size);
	
	for(i=0; i<size; i++){
		
		printf("enter the number arr[%d]: ",i);
		scanf("%d",&element);
		
		sum+=element;
	}
	
	average=sum/size;
	
	printf("the average of the array: %.2f",average);
}

#include <stdio.h>

main(){
	
	int i,j,size;
	
	printf("enter the size:");
	scanf("%d",&size);
	
	int arr[size];
	
	for(i=0; i<size; i++){
		printf("enter the arr[%d]: ",i);
		scanf("%d", &arr[i]);
	}
	
	printf("the size of the array is: %d",size);
}

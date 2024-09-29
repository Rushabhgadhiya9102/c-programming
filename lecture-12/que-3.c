#include <stdio.h>

main(){
	
	int i,j,size;
	
	printf("enter the size: ");
	scanf("%d",&size);
	
	int arr1[size];
	int arr2[size];
	
	for(i=0; i<size; i++){
		
		printf("enter the arr1[%d]: ",i);
		scanf("%d",&arr1[i]);
	}
	
	printf("\n");
	
		for(i=0; i<size; i++){
		
		printf("enter the arr2[%d]: ",i);
		scanf("%d",&arr2[i]);
	}
	
	printf("\nthe total of two array:");
	
		for(i=0; i<size; i++){
		
		printf(" %d ",arr1[i]+arr2[i]);
	}
	
}

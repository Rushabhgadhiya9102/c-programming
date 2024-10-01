#include <stdio.h>

main(){

	int arr[6]= {1,2,3,4,7,5};
	int pos;
	int num;
	int size = 6;
	int i, j;
	
	printf("enter the position: ");
	scanf("%d",&pos);
	
//	printf("enter the number: ");
//	scanf("%d",&num);
	
	for(i = pos; i< size - 1; i++){
		arr[i] = arr[i+1];
	}
	
//	arr[pos] = num;
	size--;
	
	for(i=0; i<size; i++){
		printf("%d ",arr[i]);
	}

}

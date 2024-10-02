#include <stdio.h>

main(){
	
	int i,j,row,col,sum;
	
	printf("enter the row: ");
	scanf("%d",&row);
	
	printf("enter the col: ");
	scanf("%d",&col);
	
	int arr [row][col], arr2[row][col];
	
	// LOOP FOR THE FIRST ARRAY 
	
	printf("\nElement of the first array\n");
	
	for(i=0; i<row; i++){
		
		for(j=0; j<col; j++){
			printf("Enter the element [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	// LOOP FOR THE SECOND ARRAY 
	
	printf("\nElement of the second array\n");
	
	for(i=0; i<row; i++){
		
		for(j=0; j<col; j++){
			printf("Enter the element [%d][%d]: ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			sum = arr[i][j] + arr2[i][j];
			printf("%d  ", sum);
		}
		printf("\n");
	}
}

#include <stdio.h>

main(){

	int i,j,row,col;

	printf("Enter the rows: ");
	scanf("%d",&row);

	printf("Enter the cols: ");
	scanf("%d",&col);

	int arr[row][col];
	
	for(i=0; i<row; i++){
	
		for(j=0; j<col; j++){
		
			printf("Enter the element of [%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}	
	}
	
	printf("\n Original matrix \n\n");
	
	for(i=0; i<row; i++){
	
		for(j=0; j<col; j++){
		
			printf("%d ",arr[i][j]);
		
		}
	
			printf("\n");
	}
	
	printf("\n Transpose matrix \n\n");
	
	for(i=0; i<row; i++){
	
		for(j=0; j<col; j++){
		
			printf("%d ",arr[j][i]);
		
		}
	
			printf("\n");
	}
	
}

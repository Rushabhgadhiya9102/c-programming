#include <Stdio.h>

main(){
	
	int i,j,row,col,sum;
	
	printf("Enter the row: ");
	scanf("%d",&row);
	
	printf("Enter the col: ");
	scanf("%d",&col);
	
	int arr[row][col];
	
	for(i=0; i<row; i++){
		
		for(j=0; j<col; j++){
			printf("Enter the element [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0; i<row; i++){
		
		for(j=0; j<col; j++){
			
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	// DIAGONAL OF THE MATRIX
	
	for(i=0; i<row; i++){
		
		for(j=0; j<col; j++){
			
			if(i == j){
				sum += arr[i][j];
			}
		}
		
	}
	
	printf("The sum of diagonal is : %d", sum);
}

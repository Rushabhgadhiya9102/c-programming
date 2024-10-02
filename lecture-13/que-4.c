#include <stdio.h>

main(){
	
	int i,j,row,col;
	
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
			
				  if (i == 0 || i == row - 1 || j == 0 || j == row - 1) {
                
                		printf("%d ", arr[i][j]);
            		}
            		else {
                		printf("  ");
            	}
		}
		printf("\n");
	}
}

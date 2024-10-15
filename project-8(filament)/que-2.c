#include <stdio.h>

// CUSTOM MADE FUNNCTION

int cube(int row, int col){
	
	int i,j;		// DECLARE THE VARIABLE
	
	printf("enter the row: ");		// ENTER THE ROW
	scanf("%d",&row);
	
	printf("enter the col: ");		// ENTER THE COLUMN
	scanf("%d",&col);
	
	int arr[row][col];		// ARRAY STORED ROW AND COL
	
	// FIRST LOOP FOR INPUT THE ELEMENT
	
	for(i=0;i<row;i++){		// OUTER LOOP
		for(j=0;j<col;j++){		// INNER LOOP
			printf("enter the element: ");		// ENTER THE ELEMENT
			scanf("%d",&arr[i][j]);
		}
	
	}
	
	// SECOND LOOP FOR PRINT THE ELEMENT
	
	for(i=0;i<row;i++){		// OUTER LOOP
		for(j=0;j<col;j++){		// INNER LOOP

			int *ptr = arr[i][j]*arr[i][j]*arr[i][j];		// CUBE OF THE ELEMENT STORED IN POINTER
			
			printf("%d ",ptr);		// PRINT THE POINTER
			
		}
		printf("\n");
	}
}

// MAIN FUNCTION

int main(){
	
	int row, col;		// DECLARE THE VARIABLE
	cube(row,col);		// CALLING THE FUNCTION
	
	
}

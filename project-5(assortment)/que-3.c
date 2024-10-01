#include <stdio.h>

main(){

	int i,j,row,col;				// DECLARE THE VARIABLE

	printf("Enter the rows: ");		// ENTER THE ROWS
	scanf("%d",&row);

	printf("Enter the cols: ");		// ENTER THE COLUMNS
	scanf("%d",&col);

	int arr[row][col];				// ARRAY VARIABLE IS DELCARE
	
	
	// ------------------- FIRST LOOP FOR ENTER THE ELEMENT ---------------------
	
	
	for(i=0; i<row; i++){	// OUTER LOOP
	
		for(j=0; j<col; j++){	// INNER LOOP
		
			printf("Enter the element of [%d][%d] : ",i,j);  // ENTER THE ELEMENT OF THE ARRAY
			scanf("%d",&arr[i][j]);
		}	
	}
	
	
	// ------------------- SECOND LOOP FOR PRINT THE ORIGINAL MATRIX ----------------------
	
	
	printf("\nOriginal matrix \n\n");
	
	for(i=0; i<row; i++){ 		// OUTER LOOP
	
		for(j=0; j<col; j++){	// INNER LOOP
		
			printf("%d ",arr[i][j]); 	// PRINT THE ARRAY ELEMENT
		
		}
	
			printf("\n");
	}
	
	
	// ------------------ THIRD LOOP FOR PRINT THE TRANSPOSE MATRIX -----------------------
	
	
	printf("\nTranspose matrix \n\n");
	
	for(i=0; i<row; i++){ 		// OUTER LOOP
	
		for(j=0; j<col; j++){	// INNER LOOP
		
			printf("%d ",arr[j][i]);	// PRINT THE ARRAY ELEMENT
		
		}
	
			printf("\n");
	}
	
}

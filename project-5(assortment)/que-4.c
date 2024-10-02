#include <stdio.h>

main(){
	
	int i, j, row, col;		// DECLARE THE VARIABLE
	
	int rowsum, colsum, rownum, colnum; 	// DECLARE THE VARIABLE FOR SUM OF ROW AND COLUMN
	
	printf("Enter the rows: ");		// ENTER THE ROW
	scanf("%d",&row);
	
	printf("Enter the cols: "); 	// ENTER THE COL
	scanf("%d",&col);
	
	int arr[row][col];
	
	// --------------------------- FIRST LOOP FOR INPUT THE ELEMENT ---------------------------
	
	for(i=0; i<row; i++){ 	// OUTER LOOP 
		
		for(j=0; j<col; j++){	// INNER LOOP
			
			printf("Enter the element of [%d][%d] : ",i,j); 	// ENTER THE ELEMENT OF THE ARRAY
			scanf("%d",&arr[i][j]);
			
		}
	}
	
	// --------------------------- SECOND LOOP FOR PRINT THE ELEMENT IN THE FORM OF MATRIX -------------------
	
	
	for(i=0; i<row; i++){ 	// OUTER LOOP
		
		for(j=0; j<col; j++){	// INNER LOOP
			
			printf("%d ",arr[i][j]);	// PRINT THE ELEMENT
			
		}
		
		printf("\n");
	}
	
	// --------------------------------- THIRD LOOP TO FIND THE SUM OF THE ROW ---------------------------------
	
	
	printf("Enter the rows: ");  // ENTER THE ROW NUMBER
	scanf("%d",&rownum);
	
	rowsum = 0;
	
	printf("The element of row %d: ", rownum);  // PRINT THE ROW NUMBER
	
	for( i=0; i<col; i++){ 		// LOOP TO FIND THE SUM FO ROW 
		
		printf("%d ",arr[rownum][i]);
		rowsum += arr[rownum][i];
	}
	
	printf("\nThe sum of row %d: %d",rownum,rowsum); 	// SUM OF THE ROW 
	
	
	// -------------------------------- FOURTH LOOP TO FIND THE SUM OF THE COLUMN --------------------------------
	
	
	printf("\nEnter the cols: ");		// ENTER THE COLUMN NUMBER
	scanf("%d",&colnum);
	
	colsum = 0;
	
	printf("The element of col %d: ",colnum);		// PRINT COLUMN NUMBER
	
	for( i=0; i<row; i++){		// LOOP TO FIND THE SUM OF COLUMN
		printf("%d ",arr[i][colnum]);
		colsum += arr[i][colnum];
	}
	
	printf("\nThe sum of col %d: %d",colnum,colsum);	// SUM OF THE COLUMN
	
}
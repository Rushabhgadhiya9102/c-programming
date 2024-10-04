#include <stdio.h>

main(){
	
int i,j,row,col;  				//DECLARED THE VARIABLE

printf("Enter the rows: ");		// ENTER THE ROWS
scanf("%d",&row);

printf("Enter the cols: ");		// ENTER THE COLUMNS
scanf("%d",&col);

int arr[row][col];		

// ------------ LOOP FOR TAKING INPUT OF THE ELEMENT ------------

for(i=0; i<row; i++){			// OUTER LOOP
	
	for(j=0; j<col; j++){		//INNER LOOP
		
		printf("Enter the element of [%d][%d] : ",i,j);		// ENTER THE ELEMENT OF THE ARRAY
		scanf("%d",&arr[i][j]);
	}
}

int max = arr[0][0];			// MAX VARIABLE DECLARE WHICH HAS THE ARRAY START FORM 0

// ------------ LOOP FOR PRINTING THE ELEMENT ------------

for(i=0; i<row; i++){		// OUTER LOOP
	
	for(j=0; j<col; j++){	// INNER LOOP
		
		if(arr[i][j]>max){		// CONDITION WEATHER 'I' AND 'J' IS GREATER THAN MAX VARIABLE 
			max=arr[i][j];
		}
		
	}
}

printf("The largest number is : %d",max);  // PRINT THE LARGEST NUMBER
	
}

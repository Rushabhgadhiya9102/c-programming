#include <stdio.h>

main(){
	
	int i,j,row,col,sum,count=0;
	float average; 
	
	printf("Enter the row: ");
	scanf("%d",&row);
	
	printf("Enter the col: ");
	scanf("%d",&col);
	
	int arr[row][col];
	
	for(i=0; i<row; i++){
		
		for(j=0; j<col; j++){
			printf("Enter the element: ");
			scanf("%d",&arr[i][j]);
			
			sum += arr[i][j];
			count++;
		}
	}
	
	average = sum/count;
	
	printf("the average is :%.2f",average);
	
	
}

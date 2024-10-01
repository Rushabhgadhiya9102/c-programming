#include <stdio.h>

main(){
	
int i,j,row,col;

printf("Enter the rows: ");
scanf("%d",&row);

printf("Enter the cols: ");
scanf("%d",&col);

int arr[row][col];
int max = arr[0][0];

for(i=0; i<row; i++){
	
	for(j=0; j<col; j++){
		
		printf("Enter the element of [%d][%d] : ",i,j);
		scanf("%d",&arr[i][j]);
	}
}

for(i=0; i<row; i++){
	
	for(j=0; j<col; j++){
		
		if(arr[i][j]>max){
			max=arr[i][j];
		}
		
	}
}

printf("The largest number is : %d",max);
	
}

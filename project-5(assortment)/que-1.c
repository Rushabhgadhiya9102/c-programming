#include <stdio.h>

main(){
	
	int i,size,element;			// DECLARE THE VARIABLE
	
	printf("enter the size: "); // ENTER THE SIZE OF THE ARRAY
	scanf("%d",&size);
	
	int arr[size];
	
	for(i=0; i<size; i++){     // FOR LOOP RUNS BASED ON SIZE
		
		printf("enter the a[%d]: ",i); // ENTER THE ELEMENT OF THE ARRAY
		scanf("%d",&arr[i]);
		
	}
	
	printf("the negative value from array is: ");
	
		for(i=0; i<size; i++){   // ANOTHER FOR LOOP WHICH PRINT NEGATIVE VALUE
		
			if(arr[i]<0){		 // CHECK THE CONDITION IF VALUE IS LESS THAN ZERO OR NOT
			printf("%d ",arr[i]);
		}
		
		}
}

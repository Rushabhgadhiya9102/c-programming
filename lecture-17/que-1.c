#include <stdio.h>

int arrsum(int a){
	
	int i ,sum ,arr[i];
	
	for(i=0; i<a; i++){
		
		printf("enter the element arr[%d]: ", i);
		scanf("%d",&arr[i]);
		
		sum += arr[i];
	}
	
	printf("%d", sum);
	
	
	
}

int main(){
	
	int num1;
	
		printf("enter the number:");
	scanf("%d",&num1);
	
	int arr[num1];
	
	arrsum(num1);
	
	return 0;
}

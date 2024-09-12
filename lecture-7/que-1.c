#include <stdio.h>

main(){
	
	// ---------- FOR THE MINIMUM VALUE -------------
	
	int num1, num2, num3, min;
	
	printf("Enter the first value: ",num1);
	scanf("%d",&num1);
	
	printf("Enter the second value: ",num2);
	scanf("%d",&num2);
	
	printf("Enter the third value: ",num3);
	scanf("%d",&num3);
	
	if(num1<num2){
		if(num1<num3){
			min=num1;
		}else{
			min=num2;
		}
	}else{
		if(num2<num3){
			min=num2;
		}else{
			min=num3;
		}
	}
	
	printf("%d is minimum",min);
}

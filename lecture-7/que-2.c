#include <stdio.h>

main(){
	
	// ---------- FOR THE MAXIMUM VALUE -------------
	
	int num1, num2, num3, num4, max;
	
	printf("Enter the first value: ",num1);
	scanf("%d",&num1);
	
	printf("Enter the second value: ",num2);
	scanf("%d",&num2);
	
	printf("Enter the third value: ",num3);
	scanf("%d",&num3);
	
	printf("Enter the third value: ",num4);
	scanf("%d",&num4);
	
	if(num1>num2){
		if(num1>num3){
			if(num1>num4){
				max=num1;
			}else{
				max=num2;
			}
		}else{
			if(num3>num4){
				max=num3;
			}else{
				max=num4;
			}
		}
	}else{
		if(num2>num3){
			if(num2>num4){
				max=num2;
			}else{
				max=num4;
			}
		}else{
			if(num3>num4){
				max=num3;
			}else{
				max=num4;
			}
		}
	}
	
	printf("%d is maximum",max);
}

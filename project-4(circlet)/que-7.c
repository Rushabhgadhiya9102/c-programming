#include <stdio.h>

main(){
	
	int i,j,k;
	
	for(i=1; i<=5; i++){
		
		if(i == 1 || i == 3){
			printf("* * * * *");
		}else if(i == 2){
			printf("*       *");
		}else if(i == 4 || i == 5){
			printf("*");
		}
		
		printf("\n");
	}
	
}

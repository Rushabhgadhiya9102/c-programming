#include <stdio.h>

main(){
	
	int i, j, k;
	
	for(i=1; i<=5; i++){
		
		for(k=1; k<=i; k++){
			printf("  ");
		}
		
		for(j=6-i; j>=1; j--){
			printf("%d ",j);
		}
		
		printf("\n");
	}
}

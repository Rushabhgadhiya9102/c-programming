#include <stdio.h>

main(){
	
	int i, j, k;
	
    for(i=1; i<=5; i++){
    	
    	for(j=1; j<=6-i; j++){
    		printf("%d ",j);
		}
		
		for(k=1; k<i; k++){
			printf("  ");
		}
		
		for(k=1; k<i; k++){
			printf("  ");
		}
		
		for(j=6-i; j>=1; j--){
			printf("%d ",j);
		}
		
		printf("\n");
	}

}

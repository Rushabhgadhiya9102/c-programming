#include <stdio.h>

main(){
	
	int i,j,n=1;
	
	for(i=5; i>=1; i--){
		
		for(j=1; j<=i; j++){
			
			printf("%d ",n);
		}
		n+=1;
		printf("\n");
	}
}

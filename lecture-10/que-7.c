#include <stdio.h>

main(){
	
	int i,j;
	char alpha='A';
	
	for(i=1; i<=5; i++){
		
		for(j=i; j>=1; j--){
			printf("%c ",alpha-j+1);
		}
		
		printf("\n");
		alpha++;
	}
}

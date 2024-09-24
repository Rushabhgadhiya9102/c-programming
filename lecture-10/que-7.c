#include <stdio.h>

main(){
	
	int i,j;
	char alpha='A';
	
	for(i=1; i<=5; i++){
		
		for(j=1; j<=i; j++){
			printf("%c ",'A'+i-j);
		}
		
		printf("\n");
		alpha++;
	}
}

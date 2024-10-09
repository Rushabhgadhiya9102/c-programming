#include <stdio.h>

main(){
	
	char str[1000] , alpha;
	int count,i;
	
	printf("enter the number: ");
	scanf("%s",&str);
	
	for(alpha='a'; alpha <= 'z'; alpha++){
		
		count = 0; 
		
		for( i = 0; str[i] != '\0'; i++){
			
			if(alpha == str[i]){
				count++;
			}
		}
		
		if(count>0){
			printf("%c : %d\n", alpha, count);
		}
	}
}

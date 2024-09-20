#include <stdio.h>

main(){
	
	char alpha = 'a';         // take char 'a'
	
	do{	
		printf("%c ",alpha);  //print char using do while loop 
		alpha+=4;             // increase char by 4
	}while(alpha<='z');       // check the condition
}

#include <stdio.h>

main(){
	
	int i, j, k; //DECLARE VARIABLE
	
for ( i = 0; i < 5; i++) // OUTER LOOP
  {
    for ( k = 0; k < 5 - i ; k++) // INNER LOOP FOR WHITE SPACE
    {
      printf("  ");
    }
    for ( j = 5 - i; j <= 5; j++) // INNER LOOP FOR PRINT
    {
      printf("%d ", j);
    }
    for ( j = 4; j >= 5 - i; j--) // INNER LOOP FOR PRINT
    {
      printf("%d ", j);
    }
    printf("\n"); // USE TO BREAK LINE AFTER FINISHING THE ITERATION OF INNER LOOP
  }
}

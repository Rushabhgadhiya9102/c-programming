#include <stdio.h>

main(){
  int a, b;
  printf("Enter first number:"); // input of first number
  scanf("%d",&a);

  printf("Enter second number:"); // input of second number
  scanf("%d",&b);

  while (a<=b)  // check condition
  {
    if (a%4==0)  // again check condition
    {
      printf(" %d",a); // print msg
    }
    a++; // value is increased by 1
  }
}

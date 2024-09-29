#include <stdio.h>

main(){
	
	int i,j,size;
    float sum, avg;

    printf("enter the size:");
    scanf("%d",&size);

    int arr[size];

    for(i=0; i<size; i++){

      printf("enter the arr[%d]: ",i);
      scanf("%d",&arr[i]);

      sum += arr[i];
    }

    avg = sum / size;

    printf("the avg is : %.1f",avg);
}

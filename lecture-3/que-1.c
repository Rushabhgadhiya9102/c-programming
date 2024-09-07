#include <stdio.h>
#define pi 3.14

main(){
	
	// area of circle
	
	float radius, area, perimeter;
	printf("enter the number of radius: ");
	scanf("%d",&radius);
	
	area=pi*radius*radius;
	
	printf("the area of circle is: %f \n",area);
	
	// perimeter of the circle
	
	perimeter=2*pi*radius;
	
	printf("the perimeter of the circle is : %f", perimeter);
} 

#include <stdio.h>
#define pi 3.14

// CUSTOM FUNCTION

void circle(float radius){

    float area = pi*radius*radius;
    printf("the area of the circle: %.2f\n",area);

    float perimeter = 2*pi*radius;
    printf("the perimeter of the circle: %.2f",perimeter);

}

// MAIN FUNCTION

int main(){

    float radius;
    printf("enter the radius: ");
    scanf("%f",&radius);

    circle(radius);

    return 0;
}
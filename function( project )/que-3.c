#include <stdio.h>

// CUSTOM FUNCTION

void triangle(float num1, float num2){

    float area = (num1*num2)/2;
    printf("the area of triangle:%.2f",area);
}

// MAIN FUNCTION

int main(){

    float num1, num2;

    printf("enter the first number: ");
    scanf("%f",&num1);

    printf("enter the second number: ");
    scanf("%f",&num2);

    triangle(num1,num2);
}
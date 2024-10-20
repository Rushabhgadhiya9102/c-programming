#include <stdio.h>

// CUSTOM FUNCTION 

void SI(float a, float b, float c){

    float si = (a*b*c)/100;     // FORMULA TO FIND SIMPLE INTREST
    printf("the simple intrest : %.2f",si);
}

// MAIN FUNCTION

int main(){

    float p,r,t;        // DECLARE THE VARIABLE

    printf("enter the p: ");        // ENTER THE VALUE
    scanf("%f",&p);

    printf("enter the p: ");        // ENTER THE VALUE
    scanf("%f",&r);

    printf("enter the p: ");        // ENTER THE VALUE
    scanf("%f",&t);

    SI(p,r,t);      // CALLING THE FUNCTION

}
#include <stdio.h>

// CUSTOM FUNCTION 

void SI(float a, float b, float c){

    float si = (a*b*c)/100;
    printf("the simple intrest : %.2f",si);
}

// MAIN FUNCTION

int main(){

    float p,r,t;

    printf("enter the p: ");
    scanf("%f",&p);

    printf("enter the p: ");
    scanf("%f",&r);

    printf("enter the p: ");
    scanf("%f",&t);

    SI(p,r,t);

}
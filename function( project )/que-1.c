#include <stdio.h>

// CUSTOM FUNCTION

void temperature( float a){

    float fahrenheit = (a* 9/5)+32;
    printf("the fahrenheit :%.2f",fahrenheit);

}

// MAIN FUNCTION

int main(){

    float cel;

    printf("enter the celsius: ");
    scanf("%f",&cel);

    temperature(cel);

    return 0;
}
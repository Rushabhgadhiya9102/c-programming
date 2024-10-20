#include <Stdio.h>

// CUSTOM MADE FUNCTION

void angle(int a, int b){

    int third = 180 - (a+b);        // FORMULA TO FIND THIRD ANGLE
    printf("the third angle :%d", third);
}

// MAIN FUNCTION 

int main(){

    int first, second, third;       // DECALRE THE VARIABLE

    printf("enter the first: ");        // ENTER THE FIRST ANGLE
    scanf("%d",&first);

    printf("enter the second: ");       // ENTER THE SECOND ANGLE
    scanf("%d",&second);

    angle(first,second);        // CALLING THE CUSTOM FUNCTION
}
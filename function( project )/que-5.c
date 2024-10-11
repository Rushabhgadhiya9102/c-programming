#include <Stdio.h>

void angle(int a, int b){

    int third = 180 - (a+b);
    printf("the third angle :%d", third);
}

int main(){

    int first, second, third;

    printf("enter the first: ");
    scanf("%d",&first);

    printf("enter the second: ");
    scanf("%d",&second);

    angle(first,second);
}
#include <stdio.h>

void loop(int a, int b){

    if(a<=b){
        printf("%d\n",a++);
        loop(a,b);
    }
}

int main() {

    int num1, num2;

    printf("enter the first number:");
    scanf("%d",&num1);

    printf("enter the second number:");
    scanf("%d",&num2);

    loop(num1,num2);

    return 0;
}
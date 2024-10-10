#include <stdio.h>

main(){

char string[100];
int i,j,length;

printf("enter the string :");
scanf("%s",&string);

for(i=0; string[i]!='\0'; i++)
{
    length=1;

    for(j=i+1; string[j]!='\0'; j++)
    {
        if(string[i]==string[j])
        {
            length++;
            string[j]='.';
        }
    }
    if(string[i]!='.')
    printf("\n %c : %d",string[i],length);
}
}

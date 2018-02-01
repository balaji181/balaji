#include <stdio.h>
void main()
{
    int b,i;
    printf("enter the number");
    scanf("%d",&b);
    for(i=0;b!=0;i++)
    {
    b/=10;
    }
    
printf("digts of given numbers %d",i);
}




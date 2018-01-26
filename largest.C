#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Input three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
printf("a is largest");
if(b>c&&b>a)
printf("b is largest");
else
printf("c is largest");

}

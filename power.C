#include<stdio.h>
int main()
{
int n,a,i;
int power=1;
scanf("%d",&n);
scanf("%d",&a);
for(i=0;i<a;i++)
{
power = power * n;
}
printf("%d",power);
return 0;
}

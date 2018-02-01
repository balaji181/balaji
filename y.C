#include<stdio.h>
void main()
{
    int i,n,b,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b);
        sum=sum+b;
    }
    printf("%d",sum);
}

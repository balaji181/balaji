#include <stdio.h>

int main(void) {
    int b,a,d,ans,i,t=0;
    printf("enter the values");
    scanf("%d%d%d",&b,&a,&d);
    ans=a;
    for(i=0;i<b;i++)
    {
    	t=t+ans;
    	ans=ans+d;
    }
    printf("%d",t);
	return 0;
}

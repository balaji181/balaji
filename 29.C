#include <stdio.h>

int main(void) 
{
	int min,hr,minutes,s=00;
	printf("enter the time=");
	scanf("%d",&min);
	hr=min/60;
	minutes=min%60;
	if(minutes>60)
	{
		s=minutes%60;
		minutes=minutes-s;
	}
	printf("%d %d %d",hr,minutes,s);
	return 0;
}

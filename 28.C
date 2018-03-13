#include <stdio.h>

int main(void) 
{
	int arr[20],a,b;
	printf("enter the size of the array:");
	scanf("%d",&b);
	printf("\n enter the array elments:");
	for(a=0;a<b;a++)
	{
		scanf("%d",&arr[a]);
		printf("\n%d %d",arr[a],a);
	}
	return 0;
}

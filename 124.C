#include <stdio.h>

int main(void) 
{
	int array[10];
	int a,i,b,temp;
	float median;
	printf("\n enter the array size:");
	scanf("%d",&n);
	printf("\n enter the array elements:");
	for(i=0;i<a;i++)
	{
		scanf("%d",&array[i]);
	}
	for (i=0;i<a;i++)
	{
		for(b=i+1;b<a;b++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[b];
				array[b]=temp;
			}
		}
	}
	if(n%2==0)
	{
		median=(array[a/2]+array[(a-1)/2])/2;
	}
	else
	{
		median=array[a/2];
	}
	printf("%f",median);
	return 0;
}

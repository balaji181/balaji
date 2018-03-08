#include <stdio.h>

int main(void) 
{
	char s[10];
	int a,i;
	printf("enter the string:");
	scanf("%s",s);
	a=strlen(s);
	for(i=0;i<a;i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			printf("\n YES");
		}
		else
		printf("\n NO");
	}
	return 0;
}


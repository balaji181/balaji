#include <stdio.h>

int main(void) {
	int ah,am,eh,em; 
	int r1,r2,res,min,sec;
	printf("enter the start time hours and minutes");
	scanf("%d %d",&ah,&am);
	printf("\nenter the end time hours and minutes");
	scanf("%d %d",&eh,&em);
	if(ah>eh)
	{
		eh=eh+12;
	}
	r1=(ah*60)+am;
	r2=(eh*60)+em;
	res=r2-r1;
	min=res/60;
	sec=res%60;
	printf("\n%dhr:%dsec\n%dhr:%dsec",ah,am,eh,em);
	printf("\nthe difference is:\n%dhr:%dmin",min,sec);
	return 0;
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int j=1,sum=0;
	clrscr();
	while(j<=10)
	{
		printf("\n\t %d",j);
		sum=sum+j;
		j++;
	}
	printf("\n\t sum is =%d",sum);
	getch();
}
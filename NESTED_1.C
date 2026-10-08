#include<stdio.h>
#include<conio.h>
void main()
{
	int j,i;
	clrscr();
	for(j=1;j<=5;j++)
	{
		for(i=1;i<=j;i++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	getch();
}
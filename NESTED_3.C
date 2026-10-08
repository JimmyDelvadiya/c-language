#include<stdio.h>
#include<conio.h>
void main()
{
	int j,i;
	clrscr();
	for(j=1;j<=5;j++)
	{
		for(i=j;i>=1;i--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int j;
	clrscr();
	for(j=1;j<=10;j++)
	{
		printf("\n\t%d=%d",j,j*j*j);
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int j,mul=1;
	clrscr();
	for(j=1;j<=7;j++)
	{
		printf("\n\t%d",mul);
		mul=mul*2;
	}
	getch();
}
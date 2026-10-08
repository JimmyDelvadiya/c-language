#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("\n\t Enter the value of x:");
	scanf("%d",&x);
	printf("\n\t Enter the value of y:");
	scanf("%d",&y);
	(x>y)?printf("\n\t x is big"):printf("\n\t y is big");
	getch();

}
#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
	clrscr();
	sum();
	getch();
}
void sum()
{
	int x,y,z;
	printf("\n Enter two values :");
	scanf("%d %d",&x,&y);
	z=x*y;
	printf("\n Sum =%d",z);
}
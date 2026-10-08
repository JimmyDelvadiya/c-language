#include<stdio.h>
#include<conio.h>
void sum(int,int);
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter the two number");
	scanf("%d %d",&a,&b);
	sum(a,b);//function call
	getch();
}
void sum(int x,int y)
{
	int z;
	z=x/y;
	printf("\n Sum = %d",z);
}
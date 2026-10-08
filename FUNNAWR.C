#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
	int c;
	clrscr();
	c=sum();//function call
	printf("\n sum=%d",c);
	getch();
}
int sum()
{
	int x,y,z;
	printf("\n enter two values :");
	scanf("%d %d",&x,&y);

	z=x+y;
	return z;// return value
}
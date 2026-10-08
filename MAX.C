#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	clrscr();
	printf("\n\tenter the value of x=");
	scanf("\n\t%d",&x);
	printf("\n\tenter the value of y=");
	scanf("\n\t%d",&y);
	if(x>y)
	{
		printf("\n\tx is max");
	}
	else
	{
		printf("\n\ty is max");
	}
	getch();
	return 0;
}
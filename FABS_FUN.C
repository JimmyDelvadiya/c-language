#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	double x=123.54,result;
	clrscr();
	result=fabs(x);
	printf("absolute value of %lf is %lf",x,result);
	getch();
}
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	double x=123.4,result;
	clrscr();
	result=ceil(x);
	printf("Original Number Is %lf and rounded Number is %lf",x,result);
	getch();
}
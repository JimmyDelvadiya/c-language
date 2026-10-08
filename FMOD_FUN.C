#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	double x=5,y=2,result;
	clrscr();
	result=fmod(x,y);
	printf("the reminder of %f / %fis %f",x,y,result);
	getch();
}
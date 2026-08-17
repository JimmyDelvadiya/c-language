#include<stdio.h>
#include<conio.h>
void main()
{
int mark;
clrscr();
printf("\n\tenter your mark:");
scanf("\n\t%d",&mark);
if(mark>=90)
{
	printf("\n\tCongratulation You are pass");
	printf("\n\tYou got distinction");
	printf("\n\t You got A+ GRADE");
}
else if(mark>=75)
{
	printf("\n\tCongratulation You are pass");
	printf("\n\tYou got excellent");
	printf("\n\t You got B+ GRADE");
}
else if(mark>=60)
{
	printf("\n\tCongratulation You are pass");
	printf("\n\tyou perform GOOD");
	printf("\n\tYou got C+ GRADE");
}
else if(mark>=35)
{
	printf("\n\tCongratulation You are pass");
	printf("\n\tyou perform well");
	printf("\n\tYou got D+ GRADE");
}
else
{
	printf("\n\tyou are fail");
	printf("\n\t You got D- GRADE");
	printf("\n\t BETTER LUCK NEXT TIME");
}
getch();
}
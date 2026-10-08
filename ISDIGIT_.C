#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char a;
	clrscr();
	printf("\n enter any character:");
	scanf("%c",&a);
	if(isdigit(a))
	{
		printf("\n it is a digit.");
	}
	else
	{
		printf("\n it is not a digit.");
	}
	getch();
}
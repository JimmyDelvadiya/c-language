#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char a;
	clrscr();
	printf("\n enter any character:");
	scanf("%c",&a);
	if(isprint(a))
	{
		printf("\n it is a printing character.");
	}
	else
	{
		printf("\n it is not a printing character.");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char a;
	clrscr();
	printf("\n enter any character:");
	scanf("%c",&a);
	if(islower(a))
	{
		printf("\n it is a lower character.");
	}
	else
	{
		printf("\n it is not a lower character.");
	}
	getch();
}
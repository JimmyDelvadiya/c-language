#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char a;
	clrscr();
	printf("\n enter any character:");
	scanf("%c",&a);
	if(isupper(a))
	{
		printf("\n it is a upper character.");
	}
	else
	{
		printf("\n it is not a upper character.");
	}
	getch();
}
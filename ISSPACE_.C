#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char a;
	clrscr();
	printf("\n enter any character:");
	scanf("%c",&a);
	if(isspace(a))
	{
		printf("it is a space");
	}
	else
	{
		printf("it is not a space");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char a;
	clrscr();
	printf("\n enter any character:");
	scanf("%c",&a);
	if(isalpha(a))
	{
		printf("\n it is a alphabet.");
	}
	else
	{
		printf("\n it is not a alphabet.");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char a;
	clrscr();
	printf("\n enter any character:");
	scanf("%c",&a);
	if(isalnum(a))
	{
		printf("\n it is an alphanumeric value.");
	}
	else
	{
		printf("\n it is not an alphanumeric value.");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char a;
	clrscr();
	printf("\n enter any character:");
	scanf("%c",&a);
	printf("\n %c",toupper(a));
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int j=1;
	clrscr();
	abbr:
	printf("\n\t My Name Is JIMMY");
	j++;
	if(j<=5)
	goto abbr;
	getch();
}
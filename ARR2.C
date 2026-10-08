#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],j;
	clrscr();
	for(j=0;j<5;j++)
	{
		printf("\n\t enter the value");
		scanf("%d",&a[j]);
	}
	for(j=0;j<5;j++)
	{
		printf("\n\t%d",a[j]);
	}
	printf("\n\t%d",a[0]);
	getch();
}
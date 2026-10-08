#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],j;
	clrscr();
	for(j=1;j<=10;j++)
	{
		printf("\n\t enter the value");
		scanf("%d",&a[j]);
	}
	for(j=1;j<=10;j++)
	{
	if(a[j]%2==1)
	{
		printf("\n\t %d",a[j]);
	}
	}
	getch();
}
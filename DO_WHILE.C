#include<stdio.h>
#include<conio.h>
void main()
{
	int sum=0,j=1;
	clrscr();
	do
	{
		sum=sum+j;
		printf("\n\t %d",j);
		j=j+2;
	}while(j<=10);
	printf("\n\t the sum of 1 to 10 is:%d",sum);
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],j,sum=0;
	clrscr();
	for(j=0;j<5;j++)
	{
		printf("\n\t enter the value");
		scanf("%d",&a[j]);
		sum=sum+a[j];
	}
		printf("the sum of array = %d",sum);

	getch();
}
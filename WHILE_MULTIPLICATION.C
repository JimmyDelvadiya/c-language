#include<stdio.h>
#include<conio.h>
void main()
{
	int j=1, num;
	clrscr();
	printf("\n\t Enter the value =");
	scanf("%d",&num);
	while(j<=10)
	{
		printf("\n\t %d X %d=%d",num,j,num*j);
		j++;
	}
	getch();
}

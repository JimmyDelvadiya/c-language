#include<stdio.h>
#include<conio.h>
main()
{
     int a;
	clrscr();
	printf("\n\tenter any number=");
	scanf("\n\t%d",&a);
	if(a%2==0)
	{
		printf("\n\teven");
	}
	else
	{
		printf("\n\todd");
	}
	getch();
	return 0;

}
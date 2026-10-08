#include<stdio.h>
#include<conio.h>
main()
{	 int qnt,pri,gt;
	clrscr();
	printf("\n\tenter quantity=");
	scanf("\n\t%d",&qnt);
	printf("\n\tenter price=");
	scanf("\n\t%d",&pri);
	gt=qnt*pri;
	printf("\n\tgrand total=%d",gt);
	getch();
	return 0;

}



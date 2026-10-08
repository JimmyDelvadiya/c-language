#include<stdio.h>
#include<conio.h>
main()
{	 int mth,sci,eng,total;
	 float	pr;
	clrscr();
	printf("\n\tenter mth marks=");
	scanf("\n\t%d",&mth);
	printf("\n\tenter sci marks=");
	scanf("\n\t%d",&sci);
	printf("\n\tenter eng marks=");
	scanf("\n\t%d",&eng);
	total=mth+sci+eng;
	printf("\n\tgrand total=%d",total);
	pr=(float)total*100/300;
	printf("\n\tpercantage=%.2f%",pr);
	getch();
	return 0;

}



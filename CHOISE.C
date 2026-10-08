#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,choise;
	clrscr();
	printf("\n\tenter a=");
	scanf("\n\t%d",&a);
	printf("\n\tenter b=");
	scanf("\n\t%d",&b);

	printf("\n\t1 is for addition");
	printf("\n\t2 is for subtraction");
	printf("\n\t3 is for muntiplicatin");
	printf("\n\t4 is for division");
	printf("\n\tenter your choise=");
	scanf("%d",&choise);

	if(choise==1)
	{
		printf("\n\taddition=%d",a+b);
	}
	else
	{
		if(choise==2)
		{
			printf("\n\tsubtraction=%d",a-b);
		}
		else
		{     if(choise==3)
			{
				 printf("\n\tmultiplication %d",a*b);
			}
			else
			{  	if(choise==4)
				{
				     printf("\n\tdivision %f",(float)a/b);
				}
				else
				{
				     printf("\n\tenter true choise");
				}

			}
		}

	}
	getch();
	return 0;
}
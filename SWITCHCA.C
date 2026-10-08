#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,choise;
 clrscr();
 printf("enter yourvalue  of a=");
 scanf("%d",&a);
 printf("enter your value of b=");
 scanf("%d",&b);
 printf("\nenter 1 for addition");
 printf("\nenter 2 for subtraction");
 printf("\nenter 3 for multiplication");
 printf("\nenter 4 for division");
 printf("\nenter your choise=");
 scanf("\n%d",&choise);
 switch (choise)
 {
    case 1:
	 printf("adiition=%d",a+b);
	 break;
    case 2:
	 printf("subtraction=%d",a-b);
	 break;
    case 3:
	 printf("multplication=%d",a*b);
	 break;
    case 4:
	 printf("division=%d",a/b);
	 break;
    default:
	printf("enter your true choise");

 }
 getch();
 return 0;
}
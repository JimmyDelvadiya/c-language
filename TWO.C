#include<stdio.h>
#include<conio.h>
main()
{
 int x,y;
 clrscr();
 printf("\n\tenter value of x :");
 scanf("%d",&x);
 printf("\n\tenter value of y :");
 scanf("%d",&y);
 if(x>y)
 {
   printf("\n\tx is maximum");
 }
 else
 {
   printf("\n\ty is maximum");
 }
 getch();
 return 0;
 }
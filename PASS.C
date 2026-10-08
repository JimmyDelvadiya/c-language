#include<stdio.h>
#include<conio.h>
main()
{
 int mth,sci,eng;
 clrscr();
 printf("\n\tmth marks :");
 scanf("%d",&mth);
 printf("\n\tsci marks :");
 scanf("%d",&sci);
 printf("\n\teng marks :");
 scanf("%d",&eng);
 if(mth && sci && eng<=40)
 {
   printf("\n\tfail");
 }
 else
 {
  printf("\n\tpass");
 }
 getch();
 return 0;
 }
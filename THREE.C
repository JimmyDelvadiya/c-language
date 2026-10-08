#include<stdio.h>
#include<conio.h>
main()
{
 int x,y,z,m,s,d;
 clrscr();
 printf("\n\tenter value of x :");
 scanf("%d",&x);
  printf("\n\tenter value of y :");
 scanf("%d",&y);
 z=x+y;
 printf("\n\taddition=%d",z);
 m=x*y;
 printf("\n\tmultiply=%d",m);
 s=x-y;
 printf("\n\tsubtraction=%d",s);
 d=x/y;
 printf("\n\tdivision=%d",d);
 getch();
 return 0;


}
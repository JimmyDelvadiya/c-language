#include<stdio.h>
#include<conio.h>
main()
{  int x;
    clrscr();
    printf("\n\tenter the value of x :");
    scanf("%d",&x);

    if(x%2==0)
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
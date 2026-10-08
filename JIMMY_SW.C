#include<stdio.h>
#include<conio.h>
void main()
{
	int ch;
	clrscr();
	printf("\n 1. MONDAY");
	printf("\n 2. TUESDAY");
	printf("\n 3. WEDNESDAY");
	printf("\n 4. THRUSDAY");
	printf("\n 5. FRIDAY");
	printf("\n 6. SATURDAY");
	printf("\n 7. SUNDAY");
	printf("\n Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("MONDAY");
			break;
		case 2:
			printf("TUESDAY");
			break;
		case 3:
			printf("WEDNESDAY");
			break;
		case 4:
			printf("THRUSDAY");
			break;
		case 5:
			printf("FRIDAY");
			break;
		case 6:
			printf("SATURDAY");
			break;
		case 7:
			printf("SUNDAY");
			break;
		default:
			printf("print the value between 1 to 7");
	}
	getch();
}
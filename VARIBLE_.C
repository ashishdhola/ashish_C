#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf(" enter age:");
	scanf("%d",&a);
	if (a>18)
	printf("\n a is eligible");
	else
	printf("\n a is not eligible");
	getch();
}

// to printf 2,4,8,16,32;
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a;
	clrscr();
	for(a=1;a<=5;a++)
	printf("\n%.f",pow(2,a));
	getch();
}
// to print *
//          **
//          ***
//          ****
//          *****
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	for(a=1;a<=6;a++)
	{
	for(b=1;b<=a;b++)
		{
		printf("*");
		}
		printf("\n");
	}
	getch();
}

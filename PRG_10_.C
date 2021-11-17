// find number is positive orr nagitive
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("a=");
	scanf("%d",&a);
	if (a>0)
	{
	printf("\n\t a%dis positive",a);
	}
	else
	{
	printf("\n\t a%dis negitive",a);
	}
	getch();
}
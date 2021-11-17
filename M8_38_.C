// to find squar with own function
#include<stdio.h>
#include<conio.h>
void main()
{
	void squar(int);
	int x;
	clrscr();
	printf("enter x:");
	scanf("%d",&x);
	squar(x);
	getch();
}
void squar (int a)
{
	printf("\n (x2):%d",a*a);
}






#include<stdio.h>
#include<conio.h>
void main()
{
	void square();
	clrscr();
	square();
	getch();
}
void square()
{
	int x;
	printf("\n enter x:");
	scanf("%d",&x);
	printf("\n x2=%d",x*x);
}

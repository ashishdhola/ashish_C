// swaip value for a,b,c
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=20,c=30;
	clrscr();
	a=a+b+c;
	b=a-b-c;
	c=a-b-c;
	a=a-b-c;
	printf("\na=%d",a);
	printf("\nb=%d",b);
	printf("\nc=%d",c);
	getch();
}
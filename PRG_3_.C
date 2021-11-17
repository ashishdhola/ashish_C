// chang value
#include<stdio.h>
#include<conio.h>
void main ()
{
	int a=20,b=30,c=40,e;
	clrscr();
	e=a;
	a=c;
	c=b;
	b=e;
	printf("\na=%d",a);
	printf("\nb=%d",b);
	printf("\nc=%d",c);
	getch();
}

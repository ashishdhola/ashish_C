//find e and f
#include<stdio.h>
#include<conio.h>
void main ()
{
	int a,b,c,d,e,f;
	clrscr();
	printf("enter a&b&c&d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=a+b-c+d*d;
	f=a*b-c/d/d;
	printf("e=%d",e);
	printf("\nf=%d",f);
	getch();
}



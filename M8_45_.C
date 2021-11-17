// find vlaue of i using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1000,*p;
	clrscr();
	p=&i;
	printf("\n value of i:%d",i);
	printf("\n address of i: %u ",&i);
	printf("\n address of p:%u",&p);
	printf("\n address of i:%d",i);
	printf("\n value of i using p:%d",*p);
	getch();
}
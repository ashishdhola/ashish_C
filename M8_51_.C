// recursion
// function call function
#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
void main()
{
	clrscr();
	printf("\n fact:%d",fact(6));
	getch();
}
// to print 1=odd
// to print 2=even
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	for(num=1;num<=50;num++)
	if(num%2==1)
	printf("  %d=odd  ",num);
	else
	printf("  %d=even  ",num);
	getch();
}
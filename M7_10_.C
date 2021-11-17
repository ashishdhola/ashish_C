// 1to50  odd  number
// 1to 50 even number
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	for(a=1;a<=50;a++)
	if(a%2==1)
	printf(" %d ",a);
	printf("\n");
	for(a=1;a<=50;a++)
	if(a%2==0)
	printf(" %d ",a);
	getch();
}
// to find number a,b is grater then 1000  or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter a&b:");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("\n c=(%d)",c);
	if(c>1000)
	printf("\n a and b=(%d)",c);
	else
	printf("\n a and b is not grater than=(%d)",c);
	getch();
}
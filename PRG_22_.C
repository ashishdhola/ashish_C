// to find a is divisible or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	c=a%b;
	printf("\n c=(%d)",c);
	if(c==0)
	printf("\n a is divisible by b",c);
	else
	printf("\n a is not divisible by b",c);
	getch();
}

// to find wich number is\
//   a less then b
//   b less then a
//
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter a&b");
	scanf("%d%d",&a,&b);
	printf("a=%d",a);
	printf("\nb=%d",b);
	if(a<b)
	{
	printf("\n\t a (%d) is less then  b(%d)",a,b);
	}
	else
	{
	printf("\n\t b (%d) is less then a (%d)",b,a);
	}
	getch();
}

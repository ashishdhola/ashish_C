// to print small a,b,c,d;
// 	   a
//         bc
//         def
//         ghij
//         klmnop
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='a',i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
		{
		printf("%c",ch++);
		}
		printf("\n");
	}
	getch();
}



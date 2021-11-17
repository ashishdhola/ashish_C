// to print capital and samll 'abcd' revrse
// 	   klmnop
//         ghij
//         def
//         bc
//         a
/*#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='a',i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
	for(j=1;j<=i;j++)
		{
		printf("%c",ch++);
		}
		printf("\n");
	}
	getch();
} */
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='Z',i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
	for(j=1;j<=i;j++)
		{
		printf("%c",ch--);
		}
		printf("\n");
	}
	getch();
}



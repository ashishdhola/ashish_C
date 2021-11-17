// to print a,b,c,d;
// 'a'to 'z'
// 'z'to 'a'
//
//      a b c d e
//       f g h i
//        j k l
//         m n
//          o
//
//
/*#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='z',sp=40,i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=sp;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
		printf(" %c",ch--);
		}
		printf("\n");
		sp++;
	}
	getch();
} */

#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='a',sp=40,i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=sp;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
		printf(" %c",ch++);
		}
		printf("\n");
		sp++;
	}
	getch();
}
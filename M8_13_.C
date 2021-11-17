// to print desing
//        *  *
//       **  **
//      ***  ***
//     ****  ****
//    *****  *****
//
//
/*#include<stdio.h>
#include<conio.h>
void main()
{
	int sp=40,i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");

	}
	getch();
} */
#include<stdio.h>
#include<conio.h>
void main()
{
	int sp=40,i,j;
	clrscr();
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=sp;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");
		sp--;
	}
	getch();
}

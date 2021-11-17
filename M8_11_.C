// to print capital,and,small  z,y,x,w,u,v,t,s,r,q,;
// 	   a
//         bc
//         def
//         ghij
//         klmnop
/*#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='Z',i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
		{
		printf("%c",ch--);
		}
		printf("\n");
	}
	getch();
} */
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='z',i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
		{
		printf("%c",ch--);
		}
		printf("\n");
	}
	getch();
}



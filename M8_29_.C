// to print array with string
// to print array without string
/*#include<stdio.h>
#include<conio.h>
void main()
{
	char str;
	clrscr();
	printf("enter string:");
	scanf("%s",str);
	printf("\n my string:%s",str);
	getch();
} */
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[10],i;
	clrscr();
	printf("enter string:");
	scanf("%s",str);
	printf("\n my string:");
	for(i=0;i<=10;i++)
	printf("%c",str[i]);
	getch();
}
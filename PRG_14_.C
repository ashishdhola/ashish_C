// find number is vowels or consonant
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("enter character:");
	scanf("%c",&ch);
	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
	printf("\n ch:(%c) is vowels",ch);
	}
	else
	{
	printf("\n ch:(%c) is consonant",ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u');
	}
	getch();
}
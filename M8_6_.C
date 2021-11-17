// to print   a,b,c
//	      d,e,f
//	      g,h,i.....;
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	for(ch=65;ch<=90;ch++)
       {	if(ch%3==2)
		printf("\n");
		printf(" %c ",ch);

		}
		printf(" %c ",ch);

	/*else if(ch%3==1)
	printf(" %c",ch);
	else
	printf(" %c",ch);*/

	getch();
}

// array ma velue hamesha 0 thi save thay
// to prin array
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("enter a(%d)",i);
		scanf("%d",&a[i]);
	}
	getch();
}
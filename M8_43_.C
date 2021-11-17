// result  with own function
#include<stdio.h>
#include<conio.h>
int roll_no,math,sci,eng,total,pr;
void printdata(int total,int pr)
{
	printf("\n roll no:%d",roll_no);
	printf("\n marks for math: %d",math);
	printf("\n marks for sci: %d",math);
	printf("\n marks for eng: %d",math);
	printf("\n  total: %d",total);
	printf("\n pr: %d",pr);
}
void result(int math,int eng,int sci)
{
	total=math+sci+eng;
	pr=total/3;
	printdata(total,pr);
}
void getdata()
{
	printf("enter roll nuber:");
	scanf("%d",&roll_no);
	printf("\n marks for math: ",math);
	scanf("%d",&math);
	printf("\n marks for sci: ",sci);
	scanf("%d",&sci);
	printf("\n marks for eng: ",eng);
	scanf("%d",&eng);
	result(math,eng,sci);
}
void main()
{
	clrscr();
	getdata();
	getch();
}






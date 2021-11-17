//suqare and qube
#include<conio.h>
#include<stdio.h>
float cube(float i)
{
	return i*i*i;
}
float square(float i)
{
	return i*i;
}
void main()
{
	clrscr();
	printf("square : %f",square(3));
	printf("\n cube :%f",cube(3));
	getch();
}
// to find radius of circle ;
#include <stdio.h>
#include<conio.h>
void main()
{
    float circle, radius;
    clrscr();
	printf("(1). Area of Triangle");
	printf("\n");

	printf("Enter the radius:");
	scanf("%f",&radius);
	circle=3.14*radius*radius;
	printf("Area of Circle is: %.2f",circle);
	getch();
}


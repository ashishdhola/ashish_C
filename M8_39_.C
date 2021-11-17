#include<stdio.h>
#include<conio.h>
void main()
{
        int x,z;
        int square (int);
        clrscr();
        printf("enter x:");
        scanf("%d",&x);
        z=square(x);
        printf("\n x2 =%d",z);
        getch();
}
int square(int x)
{
        return(x*x);
}
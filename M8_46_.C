// swape value of 'a'__end__ 'b'
#include<stdio.h>
#include<conio.h>
void main()
{
   int x=10,y=20,c, *a,*b;
   clrscr();
//   printf("Enter the value of x:");
//   scanf("%d",&x);
//   printf("enter the value of y:");
//   scanf("%d",&y);
   a = &x;
   b = &y;

   c = *b;
   *b = *a;
   *a = c;
   printf("\n");
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
   getch();
}

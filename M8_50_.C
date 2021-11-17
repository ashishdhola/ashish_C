// array of pointer
// only run this programe in v.s.code
#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	int myarray[]={100,200,300,400,500};
	int *p=myarray;
	for(i=0;i<5;i++)
	{
		printf("element[ %d ]=add: %u val:%d\n",i+1,&myarray[i],*(p+i));
	}
	return 0;
}
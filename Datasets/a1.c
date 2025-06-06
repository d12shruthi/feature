#include<stdio.h>
int main(void)
{
	int x;
	x=10;
	if(x==10)
	{
		int x;
		x=99;
		printf("Inner x:%d\n",x);
	}
	printf("Outer x:%d\n",x);
	return 0;
}
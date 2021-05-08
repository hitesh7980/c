#include<stdio.h>
int main()
{
	int a=10, b=20;
	printf("swap this numbers a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n swapped numbers a=%d b=%d",a,b);
	return 0;
}

#include <stdio.h>

int mul(int a, int b)
{
	// take care of overflow
	return a*b;
}

int add(int a, int b)
{
	// take care of the overflow
	return a+b;
}

int minus(int a, int b)
{
	// take care of overflow
	// may return a negative value too
	return a-b;
}

int div(int a, int b)
{
	// only does integer division
	return a/b;
}

int main()
{
	int a,b;
	printf("Enter the numbers : ");
	scanf("%d%d",&a, &b);
	printf("%d", div(a,b));
	return 0;
}


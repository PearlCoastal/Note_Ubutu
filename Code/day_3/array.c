#include <stdio.h>
#define N 10
int main(int argc, const char *argv[])
{
	double a[N];
	int i=1;	
	for(i=1;i<=10;i++)
	{
		a[i]=i;
	}
	for(i=1;i<=sizeof(a)/sizeof(double);i++)
	{
		printf("%p ",&a[i]);
	}
	putchar(10);

	for(i=1;i<=sizeof(a)/sizeof(double);i++)
	{
		printf("%lf ",a[i]);
	}
	putchar(10);
	return 0;
}

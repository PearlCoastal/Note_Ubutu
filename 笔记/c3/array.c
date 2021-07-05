#include <stdio.h>

#define  N  10

int main(int argc, const char *argv[])
{
	int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i = 0;

	for(i = 0 ; i < sizeof(a)/sizeof(int); i++)
	{
		printf("%p ", &a[i]);
	}
	putchar(10);

	for(i = 0 ; i < sizeof(a)/sizeof(int); i++)
	{
	//	printf("%d ", *(&a[i]));
		printf("%d ", a[i]);
	}
	putchar(10);

	for(i = 0; i < sizeof(a)/sizeof(int); i++)
	{
		printf("%d ", *(a + i));
	}
	putchar(10);

	return 0;
}

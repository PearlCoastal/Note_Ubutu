#include <stdio.h>

int main(int argc, const char *argv[])
{
	int *p;
	int a[7];
	int i = 0;

	p = a;

	printf("p = %p\n", p);

	for(i = 0; i < 7;i++)
	{
		scanf("%d", p++);
	}

	p = a;
	printf("p = %p\n", p);

	for(i = 0; i < 7; i++, p++)
	{
		printf("%d ", *p);
	}
	putchar(10);

	return 0;
}

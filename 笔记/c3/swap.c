#include <stdio.h>

int swap(int *a, int *b)
{
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}

int main(int argc, const char *argv[])
{
	int a,b;

	scanf("%d%d", &a, &b);
	printf("a = %d b = %d\n", a, b);

#if 0
	a = a^b;
	b = a^b;
	a = a^b;

	printf("a = %d b = %d\n", a, b);

	a = a+b;
	b = a-b;
	a = a-b;
	printf("a = %d b = %d\n", a, b);
#endif

	swap(&a, &b);
	printf("a = %d b = %d\n", a, b);

	return 0;
}

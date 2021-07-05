#include <stdio.h>

int fun(int a)
{
	static int sum;
//	int sum = 0;

	sum += a;

	return sum;
}

int main(int argc, const char *argv[])
{
	int ret = 0;

	ret = fun(5);
	printf("ret = %d\n", ret);

	ret = fun(5);
	printf("ret = %d\n", ret);

	ret = fun(5);
	printf("ret = %d\n", ret);

	return 0;
}

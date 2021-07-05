#include <stdio.h>

#define  QUALITY  3.0e-23
#define  WEIGHT   950

int main(int argc, const char *argv[])
{
	int n;
	double count;

	printf("Input > ");
	scanf("%d", &n);
	printf("n = %d\n", n);

	count = n * WEIGHT / QUALITY;

	printf("count = %e\n", count);

	return 0;
}

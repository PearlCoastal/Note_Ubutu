#include <stdio.h>

#define ONE   1
#define TWO   ONE + ONE
#define THREE ONE + TWO
int main(int argc, const char *argv[])
{
	int sum=0;
	sum=ONE*TWO*TWO+THREE*TWO;
	printf("sum=%d\n",sum);
	return 0;
}

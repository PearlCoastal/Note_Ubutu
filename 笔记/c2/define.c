#include <stdio.h>

#define  ONE   1
#define  TWO   ONE + ONE
#define  THREE TWO + ONE

int main(int argc, const char *argv[])
{
	
	int sum = 0;

    // 1*1 + 1*1+1 + 1 + 1 * 1+1 + 1
	sum = ONE*TWO*TWO + TWO*THREE;

	printf("sum = %d\n", sum);

	return 0;
}

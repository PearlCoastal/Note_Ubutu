#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 0;
	int sum = 0;

LOOP:
	sum = sum + i;
	i++;
	if(i <= 10)
	{
		goto LOOP;
	}

	printf("sum = %d \n", sum);


	return 0;
}

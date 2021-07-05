#include <stdio.h>
#define  WEIGHT 950
#define  WATER 3.0e-23
int main(int argc, const char *argv[])
{
	
	double  water;
	scanf("%lf",&water);
	double answer;
	answer = water*WEIGHT / WATER;
	printf("answer=%e\n",answer);
	return 0;
}

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i=0;

	int sum=0;

Loop1:
	sum +=i;

	
		i++;
	
	if(i<=10)
	{
		printf("sum1=%d\n",sum);
		goto Loop1;
	}
    if(i>10 && i<20)
	{
		goto Loop2;
	}
Loop2:
	sum-=i;
	
	if(i>10 && i<20)
	{
		goto Loop2;
	}

	printf("sum = %d\n",sum);
	
	return 0;
}

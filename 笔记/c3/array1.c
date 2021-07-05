#include <stdio.h>

#define  N  10

int main(int argc, const char *argv[])
{
	int a[3][3] = {{1,2, 3}, 
		           {4, 5, 6},
	               {7, 8, 9}
		       	};

	int i = 0, j = 0;
// a[i][j]
	
	for(i = 0; i < sizeof(a)/sizeof(a[0]) ; i++)
	{
		for(j = 0; j < sizeof(a[0])/sizeof(int); j++)
		{
			printf("%p ", &a[i][j]);
		}
		putchar(10);
	}

	printf("a = %p\n", a);
	printf("a+1 = %p\n", a+1);
	printf("a+2 = %p\n", a+2);

	printf("a[0] = %p\n", a[0]); // *(a+0)
	printf("a[1] = %p\n", a[1]); // *(a+1)
	printf("a[2] = %p\n", a[2]);

	printf("a[0] + 1 = %p\n", a[0] + 1);
	printf("a[1] + 1 = %p\n", a[1] + 1);
	printf("a[2] + 1 = %p\n", a[2] + 1);

	for(i = 0; i < sizeof(a)/sizeof(int); i++)
	{
		printf("%d ", *(&a[0][0] + i));
		if((i+1)%3 == 0)
		{
			putchar(10);
		}
	}
	putchar(10);

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			//printf("%d ", *(*(a+i) + j));
		//	printf("%d ", *(a[i] + j));  // a[i] <==> *(a+i)
			printf("%d ", a[i][j]);
		}
		putchar(10);
	}


	return 0;
}

#include <stdio.h>

extern int a;
extern int b;
//extern int c;

int main(int argc, const char *argv[])
{

	printf("a = %d b = %d\n", a, b);

	//printf("c = %d\n", c);

	return 0;
}

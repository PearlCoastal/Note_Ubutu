#include <stdio.h>

extern int a;
extern int b;
int main(int argc, const char *argv[])
{
    printf("a=%d,b=%d\n",a,b);
	return 0;
}

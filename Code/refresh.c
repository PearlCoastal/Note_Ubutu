#include <stdio.h>
int main(int argc, const char *argv[])
{
    //printf("hello world!\n");
#if 0
	while(1)
	{
	    printf("hello world!\n");
	}
#endif
    printf("hello world!");
	fflush(stdout);
	while(1);
	return 0;
}

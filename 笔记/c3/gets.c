#include <stdio.h>

#define   N  32

int main(int argc, const char *argv[])
{
	char buf[N];

	gets(buf);

	printf("%s\n", buf);

	puts(buf);


	return 0;
}

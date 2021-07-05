#include <stdio.h>
#include <string.h>

#define  N 128

int main(int argc, const char *argv[])
{
	char src[N] = "THis is a test!";
	char dst[N];

	strcpy(dst, src);

	printf("%s\n", dst);


	return 0;
}

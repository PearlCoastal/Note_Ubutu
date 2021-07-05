#include <stdio.h>

#define  N  32

int main(int argc, const char *argv[])
{
	char * p = "hello world....";
	char str[N] = "hello world";
	char * q = str;

	*(p + 4) = 'W';
//	*(q + 4) = 'W';


	printf("%s\n", p);
//	printf("%s\n", str);
	printf("%s\n", q);


	return 0;
}

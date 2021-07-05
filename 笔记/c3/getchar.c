#include <stdio.h>

int main(int argc, const char *argv[])
{
	int  ch;

	ch = getchar();

	printf("ch = %d  %c\n", ch, ch);

	putchar(ch);
	putchar(10);
	putchar('\n');


	return 0;
}

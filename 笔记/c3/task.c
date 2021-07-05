#include <stdio.h>

int main(int argc, const char *argv[])
{
	int ch;

	while(1)
	{
		ch = getchar();
		getchar();
		if(ch >= 'A' && ch < 'Z')
		{
			putchar(ch + 32);
			putchar(10);
		}
		else if(ch >= 'a' && ch <= 'z')
		{
			putchar(ch - ' ');
			putchar('\n');
		}
		else
		{
			printf("Invalid data.\n");
		}
	}

	return 0;
}

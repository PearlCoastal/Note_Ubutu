#include <stdio.h>
int main(int argc, const char *argv[])
{
	char letter;
	letter = getchar();
	getchar();/* recycle enter*/
	if(letter>='A' && letter <='Z')
	{
		putchar(letter+32);
        putchar('\n');
	}
	else if(letter >= 'a' && letter <= 'z')
	{
	   putchar(letter-32);
       putchar('\n');
	}
	else
	{
		printf("error\n");
	}
	return 0;
}

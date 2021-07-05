#include <stdio.h>

#define  N  128

//abc  123  www
int get_word(char * p)
{

	int count = 0;

	while(*p != '\0')
	{
		if(*p != ' ' && *(p+1) == ' ' || *p != ' '&& *(p+1) == '\0')
		{
			count++;
		}
		p++;
	}

	return count;
}

int main(int argc, const char *argv[])
{
	char str[N];
	int count = 0;

	printf("Input > ");
	gets(str);
	puts(str);

	count = get_word(str);

	printf("count = %d\n", count);

	return 0;
}

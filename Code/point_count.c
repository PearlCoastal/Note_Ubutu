#include <stdio.h>

#define N 32

int getword(char *p)
{
	int count = 0;
	while(*p != '\0')
	{
		if(*p != ' '&& *(p+1) == ' '|| *p != ' ' && *(p+1) == '\0')
		{
			count++;
		}
		p++;
	}
	return count;
}

int main(int argc, const char *argv[])
{
	char s[N];
	int count=0;
	gets(s);
	count=getword(s);
	printf("%d\n",count);
	return 0;
}

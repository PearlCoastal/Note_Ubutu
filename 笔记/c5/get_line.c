#include <stdio.h>
#include <string.h>

#define  N  128

// aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
int get_line(FILE *fp)
{
	char buf[N];
	int count = 0;

	// abc'\n''\0'
	while(fgets(buf, N, fp) != NULL)
	{
		if(buf[strlen(buf)-1] == '\n')
		{
			count++;
		}
	}

	return count;
}



int main(int argc, const char *argv[])
{
	FILE *fp;
	int line = 0;

	fp = fopen("test.txt", "r");

	if(fp == NULL)
	{
		perror("fail to fopen");
		return -1;
	}

	line = get_line(fp);

	printf("line = %d \n", line);

	return 0;
}

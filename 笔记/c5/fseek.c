#include <stdio.h>

int main(int argc, const char *argv[])
{
	FILE *fp;

	if(argc != 2)
	{
		fprintf(stderr, "Usage:%s filename.", argv[0]);
		return -1;
	}

	fp = fopen(argv[1], "r+");
	if(fp == NULL)
	{
		fprintf(stderr, "fopen %s failed.", argv[1]);
		return -1;
	}

	if (fseek(fp, 10L, SEEK_SET) == -1)
	{
		printf("failed to fseek.\n");
		return -1;
	}

	fputc('A', fp);

	if (fseek(fp, -5L, SEEK_CUR) == -1)
	{
		printf("failed to fseek.\n");
		return -1;
	}

	fputc('C', fp);

	fclose(fp);
	

	return 0;
}

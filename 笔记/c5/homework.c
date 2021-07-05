#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

// ./a.out filename
#define  N  128

int get_line(FILE *fp)
{
	char buf[N];
	int count = 0;

	while(fgets(buf, N, fp) != NULL)
	{
		if(buf[strlen(buf) -1] == '\n')
		{
			count++;
		}
	}

	return count;
}

int main(int argc, const char *argv[])
{
	
	time_t tv;
	struct tm *tp;
	FILE *fp;
	int count = 0;

	if(argc != 2)
	{
		fprintf(stderr, "Usage:%s filename.\n", argv[0]);
		return -1;
	}

	fp = fopen(argv[1], "a+");
	if(fp == NULL)
	{
		fprintf(stderr, "Usage:fopen %s failed.\n", argv[1]);
		return -1;
	}
	

	count = get_line(fp);
	printf("buf_size = %d\n", fp->_IO_buf_end - fp-> _IO_buf_base); // 4k

	while(1)
	{
		time(&tv);

		tp = localtime(&tv);
		fprintf(fp,"%d , %d-%d-%d %d:%d:%d \n", count++, tp->tm_year+1900, tp->tm_mon + 1, tp->tm_mday, 
				tp->tm_hour, tp->tm_min, tp->tm_sec);
	    sleep(1);
		fflush(fp);
	}

	fclose(fp);

	return 0;
}

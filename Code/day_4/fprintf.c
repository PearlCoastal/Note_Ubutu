#include <stdio.h>
#include <time.h>
#include <unistd.h>

void get_line(FILE *fp)
{
	time_t tv;
	struct tm *tp;
	int line;
	while(1)
	{
		time(&tv);
		tp=localtime(&tv);
		fprintf(fp,"%d,%d-%d-%d %d:%d:%d \n",line,tp->tm_year+1900,tp->tm_mon,tp->tm_mday,tp->tm_hour,tp->tm_min,tp->tm_sec);
		line++;
		sleep(1);
	}
}

int main(int argc, const char *argv[])
{
	FILE *fp;
	fp=fopen("test.txt","r");

	get_line(fp);
	fclose(fp);
	return 0;
}

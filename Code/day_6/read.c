#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define N 1024

int main(int argc, const char *argv[])
{
	int fd;
	char buf[N]={}; 

	if(argc != 2)  // number of the file error
	{
		fprintf(stderr,"Usage: %s filename.\n",argv[0]);
		return -1;
	}


	fd = open(argv[1],O_RDONLY);

	printf("fd= %d\n",fd);

	if(fd == -1)  // return value of open
	{
		perror("fail to open.\n");
		return -1;
	}

	int ret =0;  // actual size of read
	ret = read(fd ,buf,N);  // N = size hope to read
	printf("ret= %d %s \n",ret,buf);

	close(fd);

	return 0;
}

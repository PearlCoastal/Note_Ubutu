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

	if(argc != )
	{
		fprintf(stderr,"Usage: %s filename.\n",argv[0]);
		return -1;
	}


	fd = open(argv[1],O_WRONLY|O_CREAT|O_TRUNC,0664);

	printf("fd= %d\n",fd);

	if(fd == -1)  // fail to open
	{
		perror("fail to open.\n");
		return -1;
	}

	strcpy(buf,"this is an apple.\n");
	int ret =0;
	ret = write(fd ,buf,strlen(buf));  // actual size of write
	printf("ret=%d\n",ret);

	close(fd);

	return 0;
}

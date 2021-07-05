#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, const char *argv[])
{
    int fd;  // file discription
	while(1)
	{
		fd=open("open.txt",O_RDONLY);
		if(fd == -1)
		{
			perror("fail to open.\n");
			return -1;
		}
		printf("fd = %d\n",fd);
	}
	return 0;
}

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(int argc, const char *argv[])
{
	
	int fd;

	while(1)
	{
		fd = open("test.txt",O_RDONLY);  // O_RDONLY
		if(fd == -1)
		{
			perror("fail to open");
			return -1;
		}
		printf("%d  ", fd);

#if 0
		if(fd == 5)
		{
			close(fd);
			break;
		}
#endif
	}
#if 0
		fd = open("test.txt",O_RDONLY);  // O_RDONLY
		printf("%d  ", fd);
#endif

	return 0;
}

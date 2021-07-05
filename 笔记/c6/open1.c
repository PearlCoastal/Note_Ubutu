#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


#define  N  128

int main(int argc, const char *argv[])
{
	int fd;
	char buf[N] = {};
	int ret = 0;

	if(argc != 2)
	{
		fprintf(stderr, "Usage:%s filename.\n", argv[0]);
		return -1;
	}

	fd = open(argv[1], O_RDONLY);
	if(fd == -1)
	{
		perror("fail to open");
		return -1;
	}

	ret = read(fd, buf, N);
	printf("ret = %d  %s \n", ret, buf);

	close(fd);


	return 0;
}

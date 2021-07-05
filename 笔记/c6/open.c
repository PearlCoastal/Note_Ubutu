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
	// w
	fd = open(argv[1], O_WRONLY|O_CREAT|O_TRUNC, 0664);

	printf("fd = %d\n", fd);

	if(fd == -1)
	{
		perror("fail to open");
		return -1;
	}

	strcpy(buf, "This is open test!");
	ret = write(fd, buf, strlen(buf));

	printf("ret = %d\n", ret);

	close(fd);


	return 0;
}

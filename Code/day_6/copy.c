#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define N 1024

int main(int argc, const char *argv[])
{
	int fd,fdw;
	char buf[N]={}; 

	if(argc != 3)
	{
		fprintf(stderr,"Usage: %s filename.\n",argv[0]);
		return -1;
	}


	fd = open(argv[1],O_RDONLY);

	printf("fd= %d\n",fd);

	if(fd == -1)  // fail to open
	{
		perror("fail to open.\n");
		return -1;
	}
   
#if 0
	int ret =0;

	ret = read(fd,buf,N);  // size hope to read
	printf("ret: %d\n",re);
#endif
    fdw = open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0664); //creat when not exist,clear when exist

	int n=0;
	while(n = read(fd,buf,N) > 0)
	{
	    write(fdw,buf,n); //write actual size of argv[1],ret 
	}
	
	printf("copy success.\n");
	close(fd);
	close(fdw);

	return 0;
}

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define  N  128

// ./a.out src.txt  dst.txt
int main(int argc, const char *argv[])
{
	int fdr,fdw;
	char buf[N];
	int n = 0;

	if(argc != 3)
	{
		fprintf(stderr, "Usage:%s src_file dst_file.\n", argv[0]);
		return -1;
	}

	fdr = open(argv[1], O_RDONLY);
	if(fdr == -1)
	{
		fprintf(stderr,"open %s failed.\n",argv[1]);
		return -1;
	}

	fdw = open(argv[2], O_WRONLY|O_CREAT|O_TRUNC, 0664);  // rw-rw-r--
	if(fdw == -1)
	{	
		fprintf(stderr,"open %s failed.\n",argv[2]);
		return -1;
	}

	while((n = read(fdr, buf, N)) > 0)
	{
		write(fdw, buf, n);
	}

	printf("copy success....\n");

	close(fdr);
	close(fdw);


	return 0;
}

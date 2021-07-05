#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//ls -lh
//-rwxrwxr-- 3 ...

int main(int argc, const char *argv[])
{
	pid_t pid;
	int status=0;
	pid = fork();
	if(pid == 0)   //child
	{
		int i=0;
		setsid();
		chdir("/");
		umask(0);
        for(i=0;i<1024;i++)
		{
			close(i);
		}
		while(1);
	}
	else if(pid >0)  //parent
	{
		exit(0);
	}
	else
	{
		printf("fail to fork.\n");
	}

	return 0;
}

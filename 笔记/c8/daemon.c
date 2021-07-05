#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	pid_t pid;

	pid = fork();
	if(pid > 0) // parent
	{
		exit(0);
	}
	else if(pid == 0) //child
	{
		int i = 0;

		setsid();
		chdir("/");
		umask(0);
		for(i = 0; i < 1024; i++)
		{
			close(i);
		}
		while(1);
	}
	else
	{
		printf("failed to fork.\n");
		return -1;
	}

	return 0;
}

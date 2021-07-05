#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	pid_t pid;
	int status;

	pid = fork();
	/* child */
	if(pid == 0)
	{
		printf("In child process....\n");
		while(1);
	}
	else if(pid > 0) // parent
	{
		sleep(1);
		kill(pid, SIGKILL);
		printf("farther kill child.\n");
		wait(NULL);
		printf("In parent process....\n");
		while(1);
	}
	else //error
	{
		printf("No child is created....\n");
	}


	return 0;
}

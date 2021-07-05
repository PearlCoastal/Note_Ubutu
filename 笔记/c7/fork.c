#include <stdio.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
	pid_t pid;

	printf("This is a fork test!");
	pid = fork();

	/* child */
	if(pid == 0)
	{
		printf("In child process....child pid = %d  parent pid = %d \n", getpid(), getppid());
	}
	else if(pid > 0) // parent
	{
		printf("In parent process.... child pid = %d parent pid = %d grandpa pid = %d \n", pid, getpid(), getppid());
	}
	else //error
	{
		printf("No child is created....\n");
	}

	printf("process exit...\n");

	return 0;
}

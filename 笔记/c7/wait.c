#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	pid_t pid;
	int status;
	int a = 10;

	pid = fork();
	/* child */
	if(pid == 0)
	{
		printf("In child process....\n");
		printf("a = %d &a = %p\n", a, &a);
		a = 100;
		exit(0);
	}
	else if(pid > 0) // parent
	{
		int ret;
	//	wait(NULL);
		ret = wait(&status);
		printf("In parent process.... ret = %d status = %#x \n", ret, status);
		printf("a = %d &a = %p\n", a, &a);
		while(1);
	}
	else //error
	{
		printf("No child is created....\n");
	}


	return 0;
}

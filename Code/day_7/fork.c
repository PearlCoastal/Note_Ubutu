#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(int argc, const char *argv[])
{
	pid_t pid;
	int status=0;
//    printf("this is an apple.\n");
	pid = fork();
#if 0	
	if(pid == 0)
	{
		printf("In child process....chile pid = %d parent pid = %d\n",getpid(),getppid());
	}

	else if(pid > 0)
	{
		printf("In parent process....child pid = %d parent pid = %d grantpa pid=%d\n",pid,getpid(),getppid());
	}

	else
	{
		printf("No child is created....\n");
	}
	printf("process exit.\n");
#endif
#if 0
	if(pid == 0)
	{
		printf("in child process....\n");
		exit(0);
	}
	else if(pid > 0)
	{
		int ret;
        //wait(NULL);
		ret =wait(&status);
		printf("in parent process....ret= %d status = %#x\n",ret,status);
		while(1);
	}
	else
	{
       printf("no child is created....\n");
	}
	printf("process exit.\n");
#endif
#if 1
	if(pid == 0)
	{
		printf("in child process.\n");
		while(1);
	}
	else if(pid >0)
	{
		sleep(1);
		kill(pid,SIGKILL);
		printf("father kill child.\n");
		wait(NULL);
		printf("in parent process.\n");
		while(1);
	}
	else
	{
		printf("no child created.\n");
	}
#endif
	return 0;
}

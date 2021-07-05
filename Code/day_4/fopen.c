#include <stdio.h>

#define N 128

int main(int argc, const char *argv[])
{
	FILE *fp;
	char buf[N];
    char str[N]="This is a banana.";
	fp=fopen("test.txt","w+");
	
	if(fp == NULL)
	{
		perror("fail to fopen\n");
		return -1;
	}

	if(EOF == fputs(str,fp))
	{
		perror("fail to fputs");
		return -1;
	}
	rewind(fp);
	while(fgets(buf,N,fp) != NULL)
	{
		printf("buf:%s\n",buf);
	}

	fclose(fp);

	return 0;
}

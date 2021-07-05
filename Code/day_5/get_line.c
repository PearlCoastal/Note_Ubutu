#include <stdio.h>

#include <string.h>

#define N 10

int main(int argc, const char *argv[])
{
	int count = 0;
    char buf[N];
    FILE *fp;

	fp=fopen("test.txt","r");

	while(fgets(buf,N,fp) != NULL)
    {
		if(buf[strlen(buf)-1] == '\n')   // last but one is '\n'
		{
	     	count++;
		}
	}

	printf("the number of the line is:%d\n",count);

	return 0;
}

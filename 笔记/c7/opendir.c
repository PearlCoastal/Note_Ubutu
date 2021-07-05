#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

// ls ../
int main(int argc, const char *argv[])
{
	DIR *dir;
	struct dirent *dp;

	dir = opendir("../");
    if(dir == NULL)
	{
		perror("fail to opendir");
		return -1;
	}

	while((dp = readdir(dir)) != NULL)
	{
		if(dp->d_name[0] == '.')
		{
			continue;
		}
		printf("%s ", dp->d_name);
	}
	putchar(10);

	closedir(dir);

	return 0;
}

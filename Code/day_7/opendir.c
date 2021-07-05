#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, const char *argv[])
{
	DIR *dir;
	struct dirent *dp;

    dir = opendir("../");
 
	while(dir != NULL)
    {	
        if(dir == NULL)
	    {
	    	perror("fail to opendir.\n");
	        return -1;
	    }
	    dp = readdir(dir);
    	if(dp == NULL)
     	{
	    	perror("fail to readdir.\n");
	    	return -1;
    	}
		if(dp->d_name[0] != '.')
		{
           printf("%s ",dp->d_name);
		}
	}

#if 0
	dir = opendir("../");
    if(dir == NULL)
	{
		perror("fail to opendir.\n");
		return -1;
	}
	dp = readdir(dir);
	if(dp == NULL)
	{
		perror("fail to readdir.\n");
		return -1;
	}
    printf("%s \n",dp->d_name);
#endif
    return 0;
}

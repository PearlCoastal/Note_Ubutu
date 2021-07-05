#include <stdio.h>

#include <time.h>

#include <unistd.h>

int main(int argc, const char *argv[])
{
    time_t tv;

	struct tm *tp;
   
	while(1)
	{
		time(&tv);
       
		tp = localtime(&tv);

	    printf("%d-%d-%d %d:%d:%d\n",tp->tm_year+1900,tp->tm_mon+1,tp->tm_mday,tp->tm_hour,tp->tm_min,tp->tm_sec);

		sleep(1); // pause for 1 second
    }
		return 0;
}
24,2015-6-10 18:48:43
25,2015-6-10 18:48:44
26,2015-6-10 18:48:45

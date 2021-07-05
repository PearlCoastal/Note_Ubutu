#include <stdio.h>
#include <sys/cocket.h>
#include <sys/types.h>
#include <netinet/in.h>

int main(int argc, const char *argv[])
{
	int sockfd=0,acceptedfd;
	if(argc != 3)
	{
		fprintf(stderr,"Usage: %s filename.\n",argv[1],argv[2]);
		return -1;
	}
	if((sockfd = socket(AF_INET,SOCK_STREAM),0) < 0)
	{
		perror("fail to socket");
		return -1;
	}
    struct aockaddr_in serveraddr;
	serveraddr.sin_family = AF_INET;
	serveraddr.sin_port = htonl(argv[2]);
	serveraddr.sin_addr.s_addr = 
	return 0;
}


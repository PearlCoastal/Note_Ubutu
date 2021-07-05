#include <stdio.h>
#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// ./client 192.168.1.251  10000

#define  N  128

int main(int argc, const char *argv[])
{
	int sockfd;
	struct sockaddr_in serveraddr;
	socklen_t len;
	char buf[N];

	if(argc != 3)
	{
		fprintf(stderr, "Usage:%s ipaddr port.\n", argv[0]);
		return -1;
	}

	if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		perror("failed to socket");
		return -1;
	}
	printf("sockfd = %d\n", sockfd);

	serveraddr.sin_family = AF_INET;
	serveraddr.sin_port = htons(atoi(argv[2]));  // port
	serveraddr.sin_addr.s_addr = inet_addr(argv[1]); // ip

	len = sizeof(struct sockaddr_in);

	if(connect(sockfd, (struct sockaddr *)&serveraddr, len) < 0)
	{
		perror("failed to connect");
		return -1;
	}

	while(1)
	{
		printf("Input> ");
		fgets(buf, N, stdin);
		send(sockfd, buf,strlen(buf)+1, 0);
		printf("send success...\n");

		if(strncmp(buf, "quit", 4) == 0)
		{
			break;
		}

		recv(sockfd, buf, N, 0);
		printf("server:%s\n",buf);
	}
	printf("client is exit.\n");
	close(sockfd);

	return 0;
}

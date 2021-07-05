#include <stdio.h>
#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// ./server 192.168.0.252  10000
//0x12345678

#define  N  128

int main(int argc, const char *argv[])
{
	int sockfd, acceptfd;
	struct sockaddr_in serveraddr, clientaddr;
	socklen_t len;
	int ret;
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

	len = sizeof(struct sockaddr);

	if (bind(sockfd, (struct sockaddr *)&serveraddr, len) < 0)
	{
		perror("failed to bind");
		return -1;
	}

	if (listen(sockfd, 5) < 0)
	{
		perror("failed to listen");
		return -1;
	}

	if((acceptfd = accept(sockfd, (struct sockaddr *)&clientaddr, &len)) < 0)
	{
		perror("failed to accept");
		return -1;
	}
	printf("client: %s %d\n", inet_ntoa(clientaddr.sin_addr), clientaddr.sin_port);


	while(1)
	{	
		ret = recv(acceptfd,buf, N, 0 );
		printf("ret = %d  %s \n", ret, buf);
		//abc\n0
		buf[strlen(buf)-1] = '\0';
		strcat(buf, " from server");
		send(acceptfd, buf, strlen(buf) + 1, 0);
	}

	close(acceptfd);
	close(sockfd);

	return 0;
}

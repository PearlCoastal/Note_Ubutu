#include <stdio.h>

#define N 128

int main(int argc, const char *argv[])
{
	int a,b,c;
    char ch1,ch2,ch3;
    char str[N];

#if 1
	scanf("%d%d%d",&a,&b,&c);
	printf("a=%d\nb=%d\nc=%d\n",a,b,c);
#endif

#if 0
	scanf("%c %c %c",&ch1,&ch2,&ch3);
	printf("a=%c\nb=%c\nc=%c\n",ch1,ch2,ch3);
#endif

#if 0
    scanf("%s",str);
	printf("s=%s",str);
#endif

#if 0
	scanf("%[^\n]",str);
	printf("s=%s\n",str);
#endif

	return 0;
}

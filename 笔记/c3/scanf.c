#include <stdio.h>

#define  N 128

int main(int argc, const char *argv[])
{
	int a, b, c;
	char ch1, ch2, ch3;
	char str[N];

#if 1
	scanf("%d%d%d", &a, &b, &c);
	printf("a = %d  b = %d c = %d\n", a, b, c);
#endif

#if 0
	scanf("%c%*c%c%*c%c", &ch1, &ch2, &ch3);
	printf("ch1 = %c ch2 = %c ch3 = %c \n", ch1, ch2, ch3);
#endif

#if 0
	scanf("%c %c %c", &ch1, &ch2, &ch3);
	printf("ch1 = %c ch2 = %c ch3 = %c \n", ch1, ch2, ch3);
#endif

#if 0
	scanf("%s", str);
	printf("%s\n", str);
#endif

#if 0
	scanf("%[^\n]", str);
	printf("%s\n", str);
#endif

	return 0;
}

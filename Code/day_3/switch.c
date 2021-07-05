#include <stdio.h>

int main(int argc, const char *argv[])
{
	char ch;
	ch=getchar();
	switch(ch)
	{
	case 'A':
		printf("cin A\n");
	case 'B':
		printf("cin B\n");
	default:
		printf("nor A or B.\n");
	}
	return 0;
}

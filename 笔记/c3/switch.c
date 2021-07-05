#include <stdio.h>

int main(int argc, const char *argv[])
{
	
	char ch;
	
	ch = getchar();

	switch(ch)
	{
	case 'A':
		putchar(ch+32);
		putchar(10);
		break;
	case 'B':
		putchar(ch+32);
		putchar(10);
		break;
	default:
		printf("ch : A or B.\n");
	}

	return 0;
}

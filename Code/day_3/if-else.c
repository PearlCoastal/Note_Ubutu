#include <stdio.h>
int main(int argc, const char *argv[])
{
	int x=70;
	int y=25;
	y=++x>70?100:0;
	printf("x=%d y=%d\n",x,y);
	return 0;
}

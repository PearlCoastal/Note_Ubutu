#include <stdio.h>

int main(void)
{
	// -1  1000 0001  1111 1110  1111 1111
	unsigned char ch = -1;

	// 129 1000 0001  1000 0001
	char ch1 = 129;

	printf("ch = %d\n", ch);  // 1111 1111 因为ch 为无符号数，最高位数据位。1111 1111 --> 255
	printf("ch1 = %d\n", ch1); //1000 0001 因为ch1 是一个有符号数，最高位符号位，1000 0000 ，1111 1111 --> -127


	return 0;
}

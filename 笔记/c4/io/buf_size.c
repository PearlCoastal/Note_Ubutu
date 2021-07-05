#include <stdio.h>

int main(int argc, const char *argv[])
{
	
	getchar();
	printf("stdin:%d \n", stdin->_IO_buf_end - stdin->_IO_buf_base); // 1k
	printf("stdout:%d \n", stdout->_IO_buf_end - stdout->_IO_buf_base); // 1k
	printf("stderr:%d \n", stderr->_IO_buf_end - stderr->_IO_buf_base); // 0k

	return 0;
}

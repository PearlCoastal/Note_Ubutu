#include "linklist.h"

int main(int argc, const char *argv[])
{
	linklist h;
	int i=0;
	h= creat_linklist();
	for(i=0;i<10;i++)
	{
		insert_linklist(h,i+10);
	}
	show_linklist(h);
	delete_linklist(h);
	show_linklist(h);
	return 0;
}

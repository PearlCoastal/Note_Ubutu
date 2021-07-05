#include <stdio.h>
int main(int argc, const char *argv[])
{
	int i,*p,a[7];
	p=a;
	for(i=0;i<7;i++)
	{
		scanf("%d",p++);
	}
	// p 
	p=a;
	for(i=0;i<7;i++,p++)
	{
		printf("%d\n",*p);
	}
	return 0;
}

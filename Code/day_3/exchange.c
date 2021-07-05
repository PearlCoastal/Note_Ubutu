#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a,b;
	scanf("%d%d",&a,&b);
	exchange(&a,&b);
	
	printf("a=%d\nb=%d\n",a,b);
	return 0;
}

int exchange(int *a,int *b)
{	
	*a=*a^*b;
    *b=*a^*b;
	*a=*a^*b;
#if 0
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
#endif

}

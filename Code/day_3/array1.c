#include <stdio.h>
int main(int argc, const char *argv[])
{
	int a[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=1;
		}
	}
    //a[i][j]
    for(i=0;i<3;i++)
	{
		//for(j=0;j<3;j++)
		//printf("%d ",*(*(a+i)+j));
        printf("%d ",*(*(a+i))); 
		//*(a+i) address *(*(a+i)) data
		//*data &address
	}
	putchar(10);
	return 0;
}

#include <stdio.h>
int main(int argc, const char *argv[])
{
	char ch;
	FILE *fp;
	if(argc != 2 )  //argc command number
	{
		fprintf(stderr,"Usage: %s filename.\n",argv[0]); // argv[0] the first command name 
	    return -1;
	}
	
	fp = fopen("fseek.txt","r+");
	
	if(fp==NULL)
	{
		fprintf(stderr,"Usage: fopen %s failed.\n",argv[1]); // the second command name
		return -1;
	}
	
    if(fseek(fp,10L,SEEK_SET) == -1)  //success return 0 fail return -1
	{
       fprintf(stderr,"Usage:failed to fseek\n");
	   return -1;
	}
    fputc('A',fp);
	if(fseek(fp,20L,SEEK_CUR) == -1) //set position at current
	{
		fprintf(stderr,"Usage:failed to fseek\n");
	    return -1;
	}
	fputc('C',fp);
	if(fseek(fp,20L,SEEK_END) == -1) //set position at the end of the file
	{
		fprintf(stderr,"Usage:failed to fseek\n");
	    return -1;
	}
    fputc('D',fp);
	//	printf("ch = %d\n",ch);
	
    fclose(fp);	

	return 0;
}

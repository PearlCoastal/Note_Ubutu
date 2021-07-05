#include <stdio.h>
#include <sys/types.h>  //
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>  // time
#include <pwd.h>   //
#include <grp.h>

//ls -lh
//-rwxrwxr-- 3 ...

int main(int argc, const char *argv[])
{
	struct stat buf;
	if(argc != 2)
	{
		fprintf(stderr,"Usage:%s filename.\n",argv[0]);
		return -1;
	}
	int ret;
	ret = stat(argv[1],&buf);
	if(ret == -1)
	{
		perror("fail to stat.");
		return -1;
    }
	printf("%d \n",(int)buf.st_ino);
	switch(buf.st_mode &  S_IFMT)
	{
	case S_IFSOCK:
		putchar('s');
		break;
	case S_IFLNK:
		putchar('l');
		break;
	case S_IFREG:
		putchar('-');
		break;
	case S_IFBLK:
		putchar('b');
		break;
	case S_IFCHR:
		putchar('c');
		break;
	case S_IFDIR:
		putchar('d');
		break;
	case S_IFIFO:
		putchar('p');
		break;
    default:
		printf("invalid filename.\n");
	}


	if(buf.st_mode & S_IRUSR)
	{
		putchar('r');
	}
	else
		putchar('-');
	if(buf.st_mode & S_IWUSR)
	{
		putchar('w');
	}
	else
		putchar('-');
	if(buf.st_mode & S_IXUSR)
	{
		putchar('x');
	}
	else
		putchar('-');
	if(buf.st_mode & S_IRGRP)
	{
		putchar('r');
	}
	else
		putchar('-');
	if(buf.st_mode & S_IWGRP)
	{
		putchar('w');
	}
	else
		putchar('-');
	if(buf.st_mode & S_IXGRP)
	{
		putchar('x');
	}
	else
		putchar('-');
	if(buf.st_mode & S_IROTH)
	{
		putchar('r');
	}
	else
		putchar('-');
	
	if(buf.st_mode & S_IWOTH)
	{
		putchar('w');
	}
	else
		putchar('-');
	if(buf.st_mode & S_IXOTH)
	{
		putchar('x');
	}
	else
		putchar('-');

	printf("%d ",buf.st_nlink);

	//printf("%d %d ",buf.st_uid,buf.st_gid);   //ID number
	
	struct passwd *pw;
	pw = getpwuid(buf.st_uid);
	printf("%s ",pw->pw_name);
//	printf("%s ",pw->pw_passwd);

    struct group *gp;
	gp = getgrgid(buf.st_gid);
	printf("%s ",gp->gr_name);
//	printf("%s ",gp->gr_passwd);

    printf("%d ",(int)buf.st_size);

    time_t t;
    struct tm *tp;
	t= buf.st_ctime;

	tp = localtime(&t);
    printf("%d-%d-%d %d:%d:%d ",tp->tm_year+1900,tp->tm_mon,tp->tm_mday,
			tp->tm_hour,tp->tm_min,tp->tm_sec);
    printf("%s ",argv[1]);
	
	putchar(10);

	return 0;
}

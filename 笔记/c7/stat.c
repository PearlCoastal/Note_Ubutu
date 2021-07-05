#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>

int my_ls(const char *filename)
{
	int ret;
	struct stat buf;
   	ret = stat(filename, &buf);
	if(ret == -1)
	{
		perror("fail to stat.");
		return -1;
	}

	printf("%d \n", (int)buf.st_ino);
   //  st_mode & 0170000
	switch(buf.st_mode & S_IFMT)
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
		case S_IFDIR:
			putchar('d');
			break;
		case S_IFCHR:
			putchar('c');
			break;
		case S_IFIFO:
			putchar('p');
			break;
	    default:
			printf("Invalid file.\n");
	}

	if(buf.st_mode & S_IRUSR)
		putchar('r');
	else
		putchar('-');

	if(buf.st_mode & S_IWUSR)
		putchar('w');
	else
		putchar('-');

	if(buf.st_mode & S_IXUSR)
		putchar('x');
	else
		putchar('-');

	if(buf.st_mode & S_IRGRP)
		putchar('r');
	else
		putchar('-');

	if(buf.st_mode & S_IWGRP)
		putchar('w');
	else
		putchar('-');

	if(buf.st_mode & S_IXGRP)
		putchar('x');
	else
		putchar('-');

	if(buf.st_mode & S_IROTH)
		putchar('r');
	else
		putchar('-');

	if(buf.st_mode & S_IWOTH)
		putchar('w');
	else
		putchar('-');

	if(buf.st_mode & S_IXOTH)
		putchar('x');
	else
		putchar('-');

	printf(" %d ", buf.st_nlink);

	//printf("%d %d ", buf.st_uid, buf.st_gid);
	struct passwd *pw;
	pw = getpwuid(buf.st_uid);
	printf("%s ", pw->pw_name);
//	printf("%s ", pw->pw_passwd);

	struct group *gp;
	gp = getgrgid(buf.st_gid);
	printf("%s ", gp->gr_name);
//	printf("%s ", gp->gr_passwd);

	printf("%d ", (int)buf.st_size);

	time_t t;
	struct tm * tp;
	t = buf.st_ctime;
	tp = localtime(&t);
	printf("%d-%d-%d %d:%d:%d ", tp->tm_year+1900, tp->tm_mon+1, tp->tm_mday,
			tp->tm_hour, tp->tm_min, tp->tm_sec);

	//printf("%s ", asctime(tp));
	//printf("%s ", ctime(&t));

	printf("%s ", filename);
	putchar(10);

	return 0;
}

// ls -lh  
// -rwxrwxr-- 3  ....
int main(int argc, const char *argv[])
{
	int ret;

	if(argc != 2)
	{
		fprintf(stderr, "Usage:%s filename.\n", argv[0]);
		return -1;
	}

	ret = my_ls(argv[1]);

	if(ret == -1)
	{
		printf("fail to my_ls");
		return -1;
	}


	return 0;
}

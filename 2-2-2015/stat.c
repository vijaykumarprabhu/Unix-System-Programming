#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
int main(int argc,char **argv)
{
	struct stat buf;
	if (argc<2)
	{
		printf("no args\n");
		return 0;
	}
	stat(argv[1],&buf);
	//for detection of symobloic files lstat  
	if(S_ISREG(buf.st_mode))
		printf("REGULAR FILE \n");
	if(S_ISDIR(buf.st_mode))
		printf("DIRECTORY\n");		
	if(S_ISCHR(buf.st_mode))
		printf("charecter file\n");		// ./a.out /dev/tty1
	if(S_ISBLK(buf.st_mode))
		printf("block device file\n"); // ./a.out /dev/sda1
	if(S_ISFIFO(buf.st_mode))
		printf("FIFO File\n"); //  mkfifo xyz
	if(S_ISSOCK(buf.st_mode))
		printf("Socket File\n"); // ./a.out /dev/log 
	
	
	return 0;
}

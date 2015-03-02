//progream to create a 4k hole in a file 
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main()
{
	int fd;
	fd=open("ddd",O_WRONLY|O_CREAT,0644);
	write(fd,"hello\n",strlen("hello"));
	lseek(fd,4096,SEEK_CUR);
	write(fd,"bye\n",strlen("bye"));
	// od -bc ddd in terminal
	//df to check where in the hard disk the file is stored
	//du filename indicates  number of blocks that the file is occupied 
	return 0;
}


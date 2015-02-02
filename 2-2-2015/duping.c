#include <stdio.h>
#include <fcntl.h>
#include <string.h>
int main()
{
	int fd,fd1;
	fd=open("c",O_WRONLY|O_CREAT,0644);
	fd1=open("d.txt",O_WRONLY|O_CREAT,0644);
	//dup2(fd,fd1);
	dup2(fd1,6);
	dup2(fd1,fd);
	//dup2(7,fd);
	write(fd,"HELLO\n",strlen("HELLO\n"));
	write(fd1,"HI\n",strlen("HI\n"));
	write(6,"HI!!\n",strlen("HI!!\n"));
	return 0;
}

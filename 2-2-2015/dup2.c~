#include <stdio.h>
#include <fcntl.h>
#include <string.h>
int main()
{
	int fd;
	fd=open("b",O_WRONLY|O_CREAT,0644);
	//dup2(fd,1);
	dup2(1,fd);
	write(1,"HELLO\n",strlen("HELLO\n"));
	write(fd,"HI\n",strlen("HI\n"));
	return 0;	
}

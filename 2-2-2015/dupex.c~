#include <stdio.h>
#include <fcntl.h>
#include <string.h>
int main()
{
	int fd,fd1;
	fd=open("a",O_WRONLY|O_CREAT,0644);
	fd1=dup(fd);
	write(fd,"HELLO\n",strlen("HELLO\n"));
	write(fd1,"HI\n",strlen("HI\n"));
	printf("%d \n",fd1); //always lowest available
	return 0;
}

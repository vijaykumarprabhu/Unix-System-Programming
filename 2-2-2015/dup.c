#include <stdio.h>
#include <fcntl.h>
#include <string.h>
int main()
{
	int fd;
	fd=dup(1);
	write(1,"HELLO\n",strlen("HELLO\n"));
	write(fd,"HI\n",strlen("HI\n"));
	return 0;	
}

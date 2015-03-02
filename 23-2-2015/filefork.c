#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include<stdlib.h>
//static int n;
int main()
{
	int fd;
	fd=open("forkwrite.txt",O_RDWR|O_CREAT,0666);
	int status,n=0;
	char buf[100];
	int pid;
	pid=fork();
	if(pid==0)
	{
		n=write(fd,"hello\n",strlen("hello\n"));
		printf("%d \n",n);
	}
	else if(pid>0)
	{
		
		wait(&status);
		int a=lseek(fd,0,SEEK_SET);
		n=6;
		read(fd,buf,n);
		printf("%d \n",n);
		printf("%s",buf);
		return 0;
	}
	else
	{
		printf("fork failure");
		exit(0);
	}
	
}

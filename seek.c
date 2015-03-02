/* WRITE A PRGM TO WRITE 100 BYTES OF DATA TO THE FILE AND READ THE DATA */

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

void main()
{
	char buf[100]="Welcome to USP class";
	int fd,n,sa;
	fd=open("out.txt",O_RDWR|O_CREAT,0644);
	if(fd==-1)
	{
		printf("error in opening a file\n");
	}
	else
	{
	sa=write(fd,buf,sizeof(buf));
	printf("bytes written=%d",sa);
	}
	lseek(fd,0,SEEK_SET);
	n=read(fd,buf,100);
	printf("number of bytes read=%d\n",n);
	printf("%s",buf);
	close(fd);
}

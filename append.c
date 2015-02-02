/* WRITE A PRGM TO WRITE 100 BYTES OF DATA TO THE FILE AND READ THE DATA */

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

void main()
{
	char buf[100];
	int fd,n,off;
	fd=open("out.txt",O_RDWR|O_CREAT|O_APPEND,0644);
	if(fd==-1)
	{
		printf("error in opening a file\n");
	}
	else
	{
		printf("Enter data \n");
		n=read(0,buf,100);
	
		//write(1,buf,n);
		n=write(fd,buf,n);
		//printf("%d \n",n);
	}	
	if(n<0)
	{
		printf("Write error\n");
	}
	else
	{
		off=lseek(fd,0,SEEK_CUR); //take last position
		lseek(fd,0,SEEK_SET);
		n=read(fd,buf,off);
		write(1,buf,n);
	}	
	close(fd);
}

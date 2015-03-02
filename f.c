/* PROGRAM TO DEMONSTRATE STANDARD INNPUT AND STANDARD OUTPUT */

#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>

void main()
{
	char buf[100];
	int n;
//1.	n=read(STDIN_FILENO,buf,100);
	n=read(0,buf,100);

//1.	write(STDOUT_FILENO,buf,100);
	write(1,buf,n);

}


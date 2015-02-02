#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
int main()
{
	int fd,val,accfg,val1;
	fd=open("fc.txt",O_RDONLY|O_CREAT|O_APPEND,0644); //these flags are checked
	val=fcntl(fd,F_GETFL,0);  //acces permissions different then mode so fcntl F_getfl is flag modes that is rd,wr,rdwr 
	if (val<0)
	{
		printf("Error with fcntl\n");
		
	}
	else
	{
		accfg=val & O_ACCMODE;
		/* O_READONLY 0
		   O_WRONLY 1
		   O_RDWR 2
		*/
		if(accfg==O_RDONLY)
			printf("read\n"); //0
		if(accfg==O_WRONLY)
			printf("write\n"); //1
		if(accfg==O_RDWR)
			printf("read write\n"); //2
		if(val&O_APPEND)
			printf("append\n"); //and operation with val
		if(val & O_CREAT)
			printf("create\n");
		
		val1=fcntl(fd,F_SETFL,O_NONBLOCK);
		val=fcntl(fd,F_GETFL,0); 
		//val1=val|val1;
		if(val & O_NONBLOCK)
			printf("non\n"); 
	}
	return 0;
}

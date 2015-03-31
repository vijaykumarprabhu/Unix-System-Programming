#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main()
{
	int fd[2],n,status;
	char buf[100];
	pid_t pid;
	pipe(fd);
	if((pid=fork()) < 0)
	{
		printf("error");
	}
	else if(pid==0)
	{
		/*write(fd[1],"hello\n",strlen("hello \n"));
		read(fd[0],buf,10); //call close before it stucked
		printf("%s",buf);  not happening through kernal*/
		close(fd[0]);
		write(fd[1],"hello\n",strlen("hello \n"));
		 
	
	}
	else
	{
		wait(&status);
		close(fd[1]);
		//write(fd[1],"hi\n",strlen("hi\n"));
		read(fd[0],buf,6);
		printf("%s",buf);
		
	}
}



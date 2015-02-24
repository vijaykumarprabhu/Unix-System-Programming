#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include<stdlib.h>
#include <errno.h>
#include <time.h>
int main()
{
	pid_t cpid,w;
	int status;
	cpid=fork();
	if(cpid==-1)
	{
		perror("fork error");
		exit(1);
	}
	else if(cpid==0)
	{
		printf("child process \n");
		printf("pid=%d ,ppid=%d \n",getpid(),getppid());
		sleep(2000);
		printf("pid=%d ,ppid=%d \n",getpid(),getppid()); //orphan init process
	}
	else
	{
		printf("parent process parent %d\n",getppid()); //id of loginshell
		kill(getpid(),9);
	}
	return 0;
}

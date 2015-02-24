#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include<stdlib.h>
#include <errno.h>
#include <signal.h>
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
		//exit(127); //exited 127
		//abort();  //signal 6
		//kill(getpid(),9); //signal 9
		//kill(getpid(),18); //exit 0
		//kill(getpid(),SIGALRM);
		
	}
	else
	{
		w=waitpid(cpid,&status,0);
		if(w==-1)
		{
			perror("wait error");
		}
		if(WIFEXITED(status))
		{
			printf("process exited=%d \n",WEXITSTATUS(status));
		}
		else if(WIFSIGNALED(status))
		{
			printf("signal =%d \n",WTERMSIG(status));
		}
		else if(WIFSTOPPED(status))
		{
			printf("stopped =%d\n",WSTOPSIG(status));
		}
		else
			printf("default \n");
	}
	return 0;
}

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>
void sighandler(int);
int main()
{
	pid_t pid;
	int status;
	//signal(SIGALRM,SIG_DFL);
	//signal(SIGALRM,SIG_IGN);
	//alarm(5); //cleared for the child
	pid=fork();
	alarm(3);   //child and parent excecutrs handlers
	if(pid==-1)
	{
		perror("fork error");
		exit(1);
	}
	else if(pid==0)
	{
		//sleep(5);
		printf("child process \n");
		printf("pid=%d \n",getpid());
		 signal(SIGALRM,sighandler);
		pause();
	}
	else
	{
		//sleep(5);
		//wait(&status);
		printf("main process \n");
		printf("pid=%d \n",getpid());
		
		signal(SIGALRM,sighandler);
		pause();
	}
	pause();
	return 0;
}

void sighandler(int sig)
{
	printf("signal is caught \n");
	printf("pid=%d \n",getpid());
	//exit(0);
}

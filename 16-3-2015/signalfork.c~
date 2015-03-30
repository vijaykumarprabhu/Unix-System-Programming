#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
#include <errno.h>
#include<stdlib.h>
void sighandler(int);
void sighandler1(int);
void sighandler2(int);
int main()
{
	pid_t pid;
	int status;
	//signal(SIGINT,sighandler);
	//pause();
	//sleep(2);
	alarm(0);
	pid=fork();
	
	
	if(pid==-1)
	{
		perror("fork error");
		exit(1);
	}
	else if(pid==0)
	{
		printf("child process \n");
		printf("pid=%d ,ppid=%d \n",getpid(),getppid());
		signal(SIGINT,sighandler1);
		signal(SIGALRM,sighandler1);
		printf("child ends\n");
	}
	else
	{
		signal(SIGALRM,sighandler1);
		printf("parent process parent %d\n",getpid());
		signal(SIGINT,sighandler2);
		//alarm(3);
		//wait(&status);
		
		printf("parent ends ends\n");
	}
	return 0;
	
}

void sighandler(int sig)
{
	printf("signal is caught \n");
	sleep(2);
	
}

void sighandler1(int sig)
{
	printf("signal is caught by child \n");
	
}

void sighandler2(int sig)
{
	printf("signal is caught by parent \n");
	
}

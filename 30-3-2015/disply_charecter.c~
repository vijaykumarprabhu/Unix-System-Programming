#include <signal.h>
#include <unistd.h>
#include <stdio.h>
void display(char *str);
void handler(int);
int main()
{
	pid_t pid;
	
	if((pid=fork())<0)
	{
		perror("fork");
	}
	
	else if(pid==0)
	{
		signal(SIGUSR1,handler);
		pause();
		display("output from child on terminal from using it by the user here no over lapping of charecters by the child  \n");
		kill(getppid(),SIGUSR1);
	}
	
	else
	{
		display("output from parent on terminal from using it by the user here no over lapping of charecters by the parent \n");
		kill(pid,SIGUSR1);
		signal(SIGUSR1,handler);
		pause();
	}
	
	
}

void display(char *str)
{
	for(;*str!='\0';str++)
	{
		printf("%c",*str);
		fflush(stdout);
	}
	//printf("\n");
}


void handler(int a)
{
	//printf("handler \n");
}

#include <stdio.h>
#include<unistd.h>
int main()
{
	int pid;
	int status;
	printf("befor fork pid %d  parent id %d \n",getpid(),getppid());
	pid=fork();
	if(pid==0)
	{
		printf("pid %d  child id %d \n",getpid(),getppid());
		
	}
	
	else
	{
		wait(&status);
		printf("pid %d  parent id %d \n",getpid(),getppid());
	}
	
}

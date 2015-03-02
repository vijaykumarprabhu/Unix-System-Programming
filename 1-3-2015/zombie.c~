#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>
#include<stdlib.h>

int main()
{
	pid_t cpid;
	
	cpid=fork();
	if(cpid==-1)
	{
		perror("fork error");
		exit(1);
	}
	else if(cpid >0)
	{
		printf("main process\n");
		printf("main sleeping\n");
		sleep(3);
		system("ps -x");
		printf("main ending \n");
		return 0;
	}
	else
	{
		printf("child process\n");
		printf("child ending\n");
	}
}

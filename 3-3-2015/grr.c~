#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		setpgid(getpid(),getpgrp());
		printf("pid=%d pgid=%d \n",getpid(),getpgrp());
		return 0;
	}
	else
	{
		printf("paret\n");
		printf("pid=%d pgid=%d \n",getpid(),getpgrp());
	}
}

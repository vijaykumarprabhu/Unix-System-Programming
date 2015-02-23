#include <stdio.h>
#include<unistd.h>
int main()
{
	int pid,status;
	pid=fork();
	if(pid==0)
	{
		//gcc displaycommand.c -o env  env is executable
		char * envp[]={"USER=abc","PATH=/tmp",NULL};
		execle("/home/vijaykumarprabhu/vijay/usp/23-2-2015/env","env","Hello","class",(char*)0,envp);
		
	}
	
	else
	{
		wait(&status);
		printf("parent process ends\n");
	}
	
	
}

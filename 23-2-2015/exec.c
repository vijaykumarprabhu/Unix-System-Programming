#include <stdio.h>
#include<unistd.h>
int main()
{
	int pid,status;
	pid=fork();
	if(pid==0)
	{
		printf("child process starts\n");
		//execl("/bin/ls","ls","/",(char*)0); //list all the files in root .remove "/" it will take cwd
		//execl("/bin/touch","touch","hello",(char*)0);
		//execl("/bin/cat","cat","hello",(char*)0); 
		//execl("/bin/cat","ps","/",(char*)0);
		//execlp("ls","ls","-l",(char*)0);
		//execlp("ls","a.out",(char*)0);
		//execl("/home/vijaykumarprabhu/vijay/usp/23-2-2015/a.out","a.out","/home/vijaykumarprabhu/vijay/usp/23-2-2015",(char*)0); infinite
		//char * argv[]={"ls","-l",NULL};
		//execv("/bin/ls",argv);
		
		char * envp[]={"USER=abc","PATH=/tmp",NULL};
		execle("/home/vijay/env","env","Hello","class",envp);
		
		printf("child process ends\n");
	}
	else
	{
		wait(&status);
		printf("parent process ends\n");
	}
	
	
}

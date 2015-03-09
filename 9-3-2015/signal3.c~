//write a program to catch SIGUSR1,SIGUSR2,SIGKILL,SIGSTOP,SIGTCRM signals
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
void sighandler(int);
int main()
{
	signal(SIGUSR1,sighandler);
	signal(SIGUSR2,sighandler);
	//signal(SIGKILL,sighandler);
	//signal(SIGSTOP,sighandler);
	signal(SIGKILL,SIG_IGN);
	signal(SIGSTOP,SIG_IGN);
	signal(SIGTERM,sighandler);
	//kill();
	//stop();
	
	for(;;)
		pause();
	return 0;
}
void sighandler(int sig)
{
	if(sig==SIGUSR1)
		printf("sig USR1 is caught \n");
	if(sig==SIGUSR2)
		printf("sig USR2 is caught \n");
	if(sig==SIGKILL)
		printf("SIGKILL is caught \n");
	if(sig==SIGSTOP)
		printf("sigSTOP is caught \n");
	if(sig==SIGTERM)
		printf("sigTERM is caught \n");
	
}
//./a.out &
//note id
//kill -USR1 id
//kill -TERM 4535
//kill -KILL id
//kill -STOP id

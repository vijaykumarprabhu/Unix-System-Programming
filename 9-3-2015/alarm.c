#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
void sighandler(int);
int main()
{
	//signal(SIGALRM,SIG_DFL);
	//signal(SIGALRM,SIG_IGN);
	alarm(2);
	pause();
	return 0;
}

void sighandler(int sig)
{
	printf("signal is caught \n");
	exit(0);
}

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void sighandler(int);
int main()
{
	//signal(SIGINT,SIG_DFL);
	signal(SIGINT,SIG_IGN);
	for(;;)
		pause();
	return 0;
}

void sighandler(int sig)
{
	printf("signal is caught\n");
}

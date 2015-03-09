#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
void sighandler(int);
int main()
{
	signal(SIGABRT,sighandler);
	for(;;)
		abort();
	return 0;
}

void sighandler(int sig)
{
	printf("signal is caught \n");
	exit(0);
}

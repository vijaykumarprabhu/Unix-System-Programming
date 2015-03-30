#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>
void sighandler(int);
int main()
{
	int *p=(int*)malloc(sizeof(int));
	signal(SIGALRM,sighandler);
	alarm(2);
	*p=2;
	printf("value is %d",*p);
	pause();
	return 0;
}

void sighandler(int sig)
{
	printf("signal is caught \n");
	int *p=(int*)malloc(sizeof(int));
	alarm(2);
	*p=3;
	printf("value is %d",*p);
}

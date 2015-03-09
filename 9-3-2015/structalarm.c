#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>
void sighandler(int);
struct info
{
	int a;
	int b;
	int c;
	int d;
	int e;
}data;

int main()
{
	struct info zeros={0,0,0,0,0};
	struct info ones={1,1,1,1,1};
	signal(SIGALRM,sighandler);
	alarm(1);
	while(1)
	{
		data=zeros;
		data=ones;	
	}
	pause();
	return 0;
}


void sighandler(int sig)
{
	printf("signal is caught \n");
	printf("a value %d \n",data.a);	
	printf("b value %d \n",data.b);
	printf("c value %d \n",data.c);
	printf("d value %d \n",data.d);
	printf("e value %d \n",data.e);
	alarm(1);
	//exit(0);
}

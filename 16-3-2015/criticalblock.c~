#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
void sighandler(int);
int main()
{
	signal(SIGUSR1,sighandler);
	signal(SIGALRM,sighandler);
	signal(SIGINT,sighandler);
	signal(SIGQUIT,sighandler);
	sigset_t x;
	sigemptyset(&x);
	sigaddset(&x,SIGUSR1);
	sigaddset(&x,SIGALRM);
	sigaddset(&x,SIGINT);
	sigaddset(&x,SIGQUIT);
	sigprocmask(SIG_BLOCK,&x,NULL);
	//critical section 
	sleep(5);
	//critical section ends
	sigprocmask(SIG_UNBLOCK,&x,NULL);
	sigprocmask(SIG_SETMASK,&x,NULL);
	return 0;

}



void sighandler(int sig)
{
	printf("signal is caught \n");
	
}

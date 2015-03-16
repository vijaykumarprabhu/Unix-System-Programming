#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void hd();
//void hd(int signo, struct siginfo_t *siginfo,void *context);  
int main()
{
	struct sigaction act;
	act.sa_handler=hd;
	act.sa_flags=0;
	sigaction(SIGTERM,&act,0);
	pause();
	return 0;
}

void hd()
{
	printf("Signal handler is called and signal is caught \n");
}

// kill -TERM 4051



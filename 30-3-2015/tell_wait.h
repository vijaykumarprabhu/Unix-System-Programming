
static volatile sig_atomic_t sigflag; /* set nonzero by sig handler */
static sigset_t newmask, oldmask, zeromask;
static void sig_usr(int signo)
{
	sigflag = 1;
}
/* one signal handler for SIGUSR1 and SIGUSR2 */
void TELL_WAIT(void)
{
	if (signal(SIGUSR1, sig_usr) == SIG_ERR)
		perror("signal(SIGUSR1) error");
	if (signal(SIGUSR2, sig_usr) == SIG_ERR)
		perror("signal(SIGUSR2) error");
	sigemptyset(&zeromask);
	sigemptyset(&newmask);
	sigaddset(&newmask, SIGUSR1);
	sigaddset(&newmask, SIGUSR2);
	/*
	* Block SIGUSR1 and SIGUSR2, and save current signal mask.
	*/
	if (sigprocmask(SIG_BLOCK, &newmask, &oldmask) < 0)
		perror("SIG_BLOCK error");
}
void TELL_PARENT(pid_t pid)
{
	kill(pid, SIGUSR2);
}
/* tell parent we're done */
void WAIT_PARENT(void)
{
	while (sigflag == 0)
		sigsuspend(&zeromask);
	sigflag = 0;
	/* and wait for parent */
	/*
	* Reset signal mask to original value.
	*/
	if (sigprocmask(SIG_SETMASK, &oldmask, NULL) < 0)
	perror("SIG_SETMASK error");
}
void TELL_CHILD(pid_t pid)
{
	kill(pid, SIGUSR1);
}
/* tell child we're done */
void WAIT_CHILD(void)
{
	while (sigflag == 0)
	sigsuspend(&zeromask);
	sigflag = 0;
	/* and wait for child */
	/*
	* Reset signal mask to original value.
	*/
	if (sigprocmask(SIG_SETMASK, &oldmask, NULL) < 0)
		perror("SIG_SETMASK error");
}

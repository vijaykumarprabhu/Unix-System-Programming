#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include<stdlib.h>
#include <errno.h>
#include <time.h>

int main()
{
	fork();
	printf("First\n");
	fork();
	printf("Second \n");
	return 0;
}

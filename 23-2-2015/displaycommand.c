#include <stdio.h>
#include<unistd.h>
extern char **environ;
int main(int argc,char *argv[])
{
	int i;
	char **ptr;
	for(i=0;i<argc;i++)
	{
		printf(" args : %s \n",argv[i]);
	}
	
	for(ptr=environ;*ptr!=0;ptr++)
	{
		printf("environs :%s \n",*ptr);
	}
	return 0;
}

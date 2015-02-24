#include <stdio.h>
#include <unistd.h>
#include <errno.h>
int main()
{
	/*int ret;
	printf("uid=%d ,  euid=%d \n",getuid(),geteuid());
	ret=setuid(600);
	if(ret==-1)
	{
		perror("error");
	}
	printf("uid=%d ,  euid=%d \n",getuid(),geteuid());
	return 0;
	*/
	int ret;
	printf("gid=%d ,  egid=%d \n",getgid(),getegid());
	//ret=setgid(600); //changes bopth ruid and euid
	ret=setegid(600); //changes only the efeerctive user id
	if(ret==-1)
	{
		perror("error");
	}
	printf("gid=%d ,  egid=%d \n",getgid(),getegid());
	return 0;
}

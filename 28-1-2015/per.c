#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
int main()
{
	/*creat("abc",0644);
	umask(0777);
	creat("abc1",0644);
	*/
	creat("abc2",0644);
	struct stat buf;
	int val;
	stat("abc2",&buf);
	//val=buf.st_mode|S_IXGRP;
	printf("%o\n",val);
	
	val=buf.st_mode&~S_IRGRP; //and with negated bit permissions to remove permission
	chmod("abc2",val);
	//chmod("a.txt",0644);
	//chmod("a.txt",S_IRUSR|S_IXGRP);
	//each ime i change the mode prev mod is lost
	//and with negated bit permissions to remove permission
	return 0;
	
}

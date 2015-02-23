#include<unistd.h>
#include<dirent.h>
#include<stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
int main()
{
	
	char actualpath [PATH_MAX+1];
	char *ptr;
	create("a",0644);
	symlink("a","b");
	char *symlinkpath = "b";
	ptr = realpath(symlinkpath, actualpath);
	printf("%s \n",ptr);
	return 0;
}

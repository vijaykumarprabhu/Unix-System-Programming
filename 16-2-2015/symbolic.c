#include<unistd.h>
#include<dirent.h>
#include<stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
int main()
{
	
	
	char actualpath [PATH_MAX+1];
	creat("a",0644);
	symlink("a","b"); //b points to a
	char *symlinkpath = "b";
	DIR *dp;//returns files and folders that are in a directory
	struct dirent *dirp;
	struct stat buf;
	lstat("b",&buf);
	char* ptr=malloc(buf.st_size+1);
	readlink("b",ptr,buf.st_size);
	printf("%s \n",ptr); //prints a
	return 0;
}

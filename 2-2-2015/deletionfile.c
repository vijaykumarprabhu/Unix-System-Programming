#include<unistd.h>
#include<dirent.h>
#include<stdio.h>

int main(int argc,char ** argv)
{
	DIR *dp;//return value of a directory
	dp=opendir(argv[1]);
	if(S_ISREG(buf.st_mode))
		printf("REGULAR FILE \n");
	if(S_ISDIR(buf.st_mode))
		printf("DIRECTORY\n");	
	return 0;
}

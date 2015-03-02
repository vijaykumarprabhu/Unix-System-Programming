#include<unistd.h>
#include<dirent.h>
#include<stdio.h>
int main(int argc,char ** argv)
{
	DIR *dp;//return value of a directory
	char ptr[100];
	struct dirent *dirp;
	if(argc<2)\
	{
		getcwd(ptr,100);
		
	}
	//else
		//ptr=argv[1];
	dp=opendir(ptr);
	while((dirp=readdir(dp))!=NULL)
	{
		printf("%s\n",dirp->d_name);
	}
	closedir(dp);
	return 0;
}

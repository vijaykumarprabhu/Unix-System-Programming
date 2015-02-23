#include<unistd.h>
#include<dirent.h>
#include<stdio.h>
#include <sys/stat.h>

int main(int argc,char ** argv)
{
	if(argc<2)\
	{
		printf("Error please send the foldernae to delete \n");
		return 0;
	}
	
	DIR *dp;//returns files and folders that are in a directory
	struct dirent *dirp;
	struct stat buf;
	 //holds the full path from the parent directory
	dp=opendir(argv[1]); //open the directory
	if(dp)
	{
		chdir(argv[1]);
		while((dirp=readdir(dp))!=NULL)
		{
			if (!strcmp(dirp->d_name, ".") || !strcmp(dirp->d_name, ".."))
          	{
             	continue;
          	}
          	lstat(dirp->d_name,&buf);
			if(S_ISDIR(buf.st_mode)) 
			{
				printf("deleted folder %s \n",dirp->d_name);
				rmdir(dirp->d_name);
				
			}
			else
			{
				printf("deleted file %s \n",dirp->d_name);
				unlink(dirp->d_name);
			}
		}
		chdir("..");
		rmdir(argv[1]);
		
	}
	return 0;
}

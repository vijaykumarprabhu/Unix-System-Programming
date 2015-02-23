#include<unistd.h>
#include<dirent.h>
#include<stdio.h>
#include <sys/stat.h>
void deletecontent(char *);

int main(int argc,char ** argv)
{
	if(argc<2)\
	{
		printf("Error please send the foldernae to delete \n");
		return 0;
	}
	deletecontent(argv[1]); //delete all the contents that are inside the folder
	rmdir(argv[1]); //now delete the empty folder
	return 0;
}


void deletecontent(char ptr[])
{
	DIR *dp;//returns files and folders that are in a directory
	struct dirent *dirp;
	struct stat buf;
	char path[100]; //holds the full path from the parent directory
	dp=opendir(ptr); //open the directory
	if(dp)
	{
		
		while((dirp=readdir(dp))!=NULL)
		{
			
			/* Skip the names "." and ".." as we don't want to recurse on them. */
          	if (!strcmp(dirp->d_name, ".") || !strcmp(dirp->d_name, ".."))
          	{
             	continue;
          	}
          	snprintf(path, 100, "%s/%s", ptr, dirp->d_name); //returns full path from  ptr to path 
			printf("deleted path name %s \n",path);
			lstat(path,&buf);
			if(S_ISDIR(buf.st_mode) && (rmdir(path)!=0)) //rmdir retruns 0 on succes
			{
				deletecontent(path);
				rmdir(path); //after deleting all the files(which are inside the folder) delete the folder 
			}
			else
            {
               unlink(path);
            }
				
		}
		closedir(dp);
	}
	
}

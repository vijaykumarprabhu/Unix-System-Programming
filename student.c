/* write name and usn to the file */
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include <string.h>
void main()
{
	char buf1[100];
	char buf2[18];
	char buf[1000];
	char buf3[]="\t";
	int fd,n,off,i;
	fd=open("student.txt",O_RDWR|O_CREAT|O_TRUNC,0644);
	if(fd==-1)
	{
		printf("error in opening a file\n");
	}
	else
	{
		for(i=0;i<10;i++)
		{		
			printf("Enter Student %d  name \n",i+1);
			n=read(0,buf1,100);
			//write(1,buf1,n);
			n=write(fd,buf1,n-1); //since writing side by side			
			if(n<0)
			{
				printf("Errr in writing USN\n");
				break;
			}	
			else
			{
				printf("Enter Student %d  USN \n",i+1);				
				n=read(0,buf2,18);
				//strcat(buf3,buf2);
				write(fd,buf3,1);
				n=write(fd,buf2,n);
				if(n<0)
				{
					printf("Errr in writing USN\n");
					break;
				}	
			}
		}	
	}	
	
	off=lseek(fd,0,SEEK_CUR); //take last position
	lseek(fd,0,SEEK_SET);
	n=read(fd,buf,off);
	write(1,buf,n);
	close(fd);
}

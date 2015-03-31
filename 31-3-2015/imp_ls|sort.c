//implement ls|SORT

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	/*FILE * popen(cont char *cmdstr,cont char *type)
	type------r,w
	r----stdout
	w----stdin
	rw----r
	creates a pipe,forks the shell
	sh -c cmdstr
	exec ---cmdstr
	*/
	FILE *fpin,*fpout;
	char readbuf[80];
	fpin=popen("ls","w");
	//fpout=popen("sort >temp","w"); output is in temp file
	//read and write
	printf("second popen \n");
	fpout=popen("sort","w"); //in same lone output will be peintesd 
	//if we change bboth to only seconfd popen file si displayed program is not terminated
	while(fgets(readbuf,80,fpin))
		fputs(readbuf,fpout);
	pclose(fpin);
	pclose(fpout);
	return 0;
	
}

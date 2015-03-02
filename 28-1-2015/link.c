#include<stdio.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
	creat("d.txt",0644);
	link("d.txt","c.txt");
	unlink("d.txt"); //deletes d.txt
	
	//use rename and remove
	return 0;
}

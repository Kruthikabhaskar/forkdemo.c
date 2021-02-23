#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	int pid=0;
	pid=fork();
	fd=fork();
	if(fd==0)
	{
		printf("In child\n");
	else
		printf("In Parent child process id is %d",fd);
	}
return 0;
}

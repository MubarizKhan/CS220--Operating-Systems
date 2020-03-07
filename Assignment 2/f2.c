#include <stdlib.h>
#include<unistd.h>
#include <sys/wait.h>
#include <stdio.h>
int main(int argc, char **argv){
	int pid;
	int status;
	pid = fork();
	
	if (pid == -1){
		perror("Error");
	}

	if (pid == 1)
	{
		printf("this is the child fork call %d\n", getpid());
	}
	
	else if(pid == 0){
	printf("this is the parent's process id %d\n", getppid());
	printf("this is child id? %d\n", getpid());
	wait(&status);
	}

	sleep(1);
	exit(0);

}

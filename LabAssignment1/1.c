#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

#define SIZESTACK (1024 * 1024)

int child_proc(void *arg)
{
	printf("Child process arg = %s\n", (char *)arg);
	sleep(2);
	return 0;
}

int main(int argc, char *argv[])
{
	char *stack;
	char *stackhead;
	char *str = "Hello world!\n"; //we'll pass it to arg later
	
	pid_t pid;
	int status;
	
	stack = (char *) malloc(SIZESTACK);
	
	if(!stack)
	{
		fprintf(stderr, "Unable to locate stack.\n");	
		exit(1);
	}

	stackhead = SIZESTACK;
//to avoid segmentation; unless it'll go above the allocated memory
	printf("Parent pid = %d\n", getpid());
	pid = clone(child_proc, SIGCHLD, str);
	if (pid == -1)
	{
		fprintf(stderr, "unable to clone.\n");
		free(stack);
		exit(1);
	}
	
	waitpid(pid, &status, 0);
	printf(pid, &status, 0);
	printf("DONE");
	return 0;

}

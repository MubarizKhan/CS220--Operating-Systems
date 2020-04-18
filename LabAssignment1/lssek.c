#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd;
	int ret;
	int a[10];
	fd = open("outfile", O_CREAT | O_APPEND | O_RDWR, 0600);
	if (fd < 0)
	{
		perror("open");
		exit(1);
	}

	ret = write(fd,(void *)a, sizeof(a));
	if (fd < 0)
	{
		perror("write");
		close(fd);
		exit(1);
	}

	//seek using lseek
	ret = lseek(fd, 3*sizeof(int), SEEK_SET);
	
	if(fd < 0)
	{
		perror("lseek");
		close(fd);
		exit(1);
	}

	printf("b= %d\n", b);
	close(fd);
	return 0;
}

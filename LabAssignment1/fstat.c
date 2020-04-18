#include <fcntl.h>
#include <sys/mman.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char** argv)
{
	char *filename = argv[1];
	
	FILE* abc= fopen(filename, "r");
	if(abc)
	{
		fseek(abc, 0, SEEK_END);
		long size = ftell(abc);
		printf("%s id %d bytes long.\n", filename,size);
		fseek(abc, 0, SEEK_SET);
		fclose(fp);

	}



}

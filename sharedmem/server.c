#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>
#define SHMSZ 1024


void main(){

	printf("server side.... \n");
	key_t key = 12345; // A datatype dedicated for key variables
	int shmid = shmget(key, 1024, 0777 | IPC_CREAT); 
	//second variable is the size
	//third argument-- permissions, additonall 0 added
	// rest three digits, first (7)- Read, wrote etc
	//second-- grroups, thirrd-- others

	char *shm = shmat(shmid, NULL, 0);	
	memcpy(shm, "hello from server", SHMSZ); 
	//1st argument, 2nd - the datat we need to write
	//3rd size of the second argumtny

	printf("END OF SERVER SIDE... \n");
}

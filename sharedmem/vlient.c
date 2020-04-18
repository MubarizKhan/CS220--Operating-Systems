#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h> 
#define SHMSZ 1024

void main(){
	printf("client side...\n");
	key_t key = 12345;
	int shmid = shmget(key, SHMSZ, 0777 | IPC_EXCL);
	char *shm = shmat( shmid, NULL, 0);
	printf("MessagL %s\n", shm);

	shmdt(shm); 
//freeing allocated space from ram, also deleted the id made shmctl
//takes three arguments, shared mem id, IP_RMID<-- remove ID
	shmctl(shmid,IPC_RMID, NULL); //man shmctl to know more
	
} 

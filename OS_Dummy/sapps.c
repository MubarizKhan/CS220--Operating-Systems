#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
 
 void main()
 {
         printf("System Apps ..\n");
 
         int av = fork();
         if (av == 0)
         {
                 execv("./av", NULL);
         }
 
         int background = fork();
         if (background == 0)
          {
                   execv("./bg", NULL);
          }
 
         int ss = fork();
         if (ss == 0)
         {
                 execv("./ss", NULL);
         }
 
          int dt = fork();
          if (dt == 0)
         {
                 execv("./dt", NULL);
         }
	
	else if (dt > 0){
		wait(NULL);
	}


}

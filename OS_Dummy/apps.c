#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
   
  void main()
 {
         printf("uploading ap ..\n");
 
         int firefox = fork();
         if (firefox == 0)
         {
                 execv("./ff", NULL);
         }
 
         int terminal = fork();
         if (terminal == 0)
          {
                    execv("./tt", NULL);
          }
 
          int g  = fork();
          if (g == 0)
         {
                  execv("./gg", NULL);
         }

	else if(g > 0)
	{
		wait(NULL);
	}
	

}

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void main()
{
	printf("Init Proocess has been loaded-- OS Dummy \n");
	
	int apps_fork = fork();
	if (apps_fork == 0)
	{
		execv("./apps", NULL);
	}

	int system_apps = fork();
	if (system_apps == 0)
	{
		execv("./sapps", NULL);
	}
	
	 int drivers_fork = fork();
  
          if (drivers_fork == 0);
          {
                  execv("./drivers", NULL);
          }
  

}

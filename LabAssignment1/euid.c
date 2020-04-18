#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

// Real UserID : It is account of owner of this process. It defines// which files that this process has access to.
int main( void )
{
  printf( "My effective user ID is %d\n", geteuid() );
  return EXIT_SUCCESS;
}

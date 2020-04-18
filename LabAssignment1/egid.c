#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main( void )
{
  printf( "My effective group ID is %d\n", getegid() );
  return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main( void )
  {
    printf( "My userid is %d\n", getuid() );
    return EXIT_SUCCESS;
  }

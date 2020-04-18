

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

//In a Unix system, a GID (group ID) is a name that associates a system user with other users sharing something in common (perhaps a work pr//oject or a department name). It's often used for accounting purposes. ...

int main( void )
{
    printf( "I belong to group ID %d\n", getgid() );
   
}

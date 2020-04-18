#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
 
int main(int argc, char **argv)
{
char arr[] = "0777";
char arr2[100] = "/home/user/example.txt";
int i;
i = strtol(arr, 0, 8);
if (chmod (arr2,i) < 0)
{
fprintf(stderr, "%s: error in chmod(%s, %s) - %d (%s)\n",
argv[0], arr2, arr, errno, strerror(errno));
exit(1);
}
return(0);
}

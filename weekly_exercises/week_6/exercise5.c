/*
 * A C implementation of the printenv
 * standard program.
 */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

extern char **environ;
int i;
int main(int argc, char *argv[])
{

  if (argc == 1)
  {
    i = 0;
    while(environ[i]) {
      printf("%s\n", environ[i++]); 
    }
  }
  else
  {
    i = 1;
    while(argv[i]){
      printf("%s\n", getenv(argv[i++]));
    }
  }
  return 0;
}

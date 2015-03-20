#include <stdio.h>
int main(int argc, char *argv[])
{
  
  short a = 0x0101;
  char c = a;

  printf("%x\n", a);
  printf("%x\n", c);

  printf("%d\n", a);
  printf("Before\n");
  printf("%c\n", c);
  printf("after\n");

  return 0;

}

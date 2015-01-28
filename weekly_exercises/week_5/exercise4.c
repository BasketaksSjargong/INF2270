#include <stdio.h>

int hexval (unsigned char c) {
  // Comment: Must subtract 'char' and add int to convert from char to int.
  if (c <= '9') {
    return c - '0'; 
  }
  if (c <= 'F') {
    return c - 'A' + 10;
  }
  return c - 'a' + 10;
}

// Pre code

unsigned char ca[5] = { '0', '4', 'A', 'b', 'f' };

int main(void)
{
  int i;

  for (i = 0; i < 5; ++i)
  {
    printf("hexval('%c') gir %d\n", ca[i], hexval(ca[i]));
  }
  return 0;
}

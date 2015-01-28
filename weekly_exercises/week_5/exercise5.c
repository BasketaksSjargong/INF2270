#include <stdio.h>

int isspacex(unsigned char c) {
  // Returns true if the char c is a whitespace. false otherwise.
  // Comparing int value to ascii table
  if(c == 32 || c == 10 || c == 9) return 1;
  return 0;
}

int main(void)
{
  int i;
  unsigned char charArray[5] = {'A', '	', ' ', 'b', '0'};
  for (i = 0; i < 5; ++i) {
    printf("%c a whitespace? %d\n", charArray[i], isspacex(charArray[i]));
  }
  return 0;
}


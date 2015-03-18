#include <stdio.h>
#include <string.h>

void strcatc (char s[], char c)
{
  int length = strlen(s);
  s[length] = c;
}

char teststr[20];

void test (char c)
{
  printf("Before:\"%s\".", teststr);
  strcatc(teststr, c);
  printf("\tEtter innsetting av '%c': \"%s\".\n", c, teststr);
}

int main(void)
{
  strcpy(teststr, ""); 
  test('a');
  test('b');
  test('c');
  test('.');
  test('.');
  test('z');
  return 0;
}

#include <stdio.h>
#include <string.h>

int strcmpu(unsigned char s1[], unsigned char s2[]) {
  int a = strlen(s1);
  int b = strlen(s2);
  printf("%d%d\n", a, b);

  int i, n;
  n = a;
  if (b > a) n = b;
  for (i = 0; i < b; i++) { // Only iterate over the length of the small string
    if (s1[i] == s2[i]) continue;
    if (s1[i] < s2[i]) return -1;
    if (s1[i] > s2[i]) return 1;
  }
  if (a == b) return 0;
  if (a > b) return -1;
  if (a < b) return 1;
}

void test(unsigned char s1[], unsigned char s2[]) {
  printf("strcmpu(\"%s\", \"%s\"): %d\n", s1, s2, strcmpu(s1, s2));
}

int main(void) {

  test("Abc", "Abcd");
  test("Abc", "Abc");
  test("Abcd", "Abc");
  test("Abø", "Abcd");

  return 0;
}

#include<stdio.h>

int main(void)
{
  
  unsigned char s1[] = {'-', 'a','l','l'};
  unsigned char s2[] = {'a', 'l', 'l'};
  
  printf("Is a unix option? %d\n", is_opt(s1));
  printf("Is a unix option? %d\n", is_opt(s2));
  return 0;
}

int is_opt(unsigned char s[]) {
  return (s[0] == '-');
}

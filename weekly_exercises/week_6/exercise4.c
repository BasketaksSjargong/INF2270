#include <stdio.h>
#include <string.h>


int atoi (char s[])
{

  int sum = 0;
  int str_len = strlen(s);
  int i;
  int negative = 0;

  for (i = 0; i < str_len ; ++i)
  {
    if (s[i] == '-'){
      negative = 1;
      continue;
    }
    sum = sum * 10 + s[i] - 48;
  }
  
  if (negative)
  {
    sum *= -1;
  }
  
  return sum;
}

int main(int argc, char *argv[])
{
  char s[] = "1324234298";
  printf("%d\n", atoi(s)); 
  return 0;
}

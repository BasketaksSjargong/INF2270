#include <time.h>
#include <stdio.h>


int main(void)
{
  int t = (time(NULL)/3600 + 1) % 24; // Current hour  
  if(6 <= t && t <= 9) {
    printf("God morgen, alle sammen!\n");
  } else if(10 <= t && t <= 17) {
    printf("God dag, alle sammen!\n");
  } else if(18 <= t && t <= 21) {
    printf("God kveld, alle sammen!\n");
  } else {
    printf("God natt, alle sammen!\n");
  }
  printf("Klokken er %d\n", t);
  return 0;
}

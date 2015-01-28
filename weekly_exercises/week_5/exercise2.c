#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // Reads a list of 100 integers and calculates the sum and the maximum
  // element.

  int i, max, sum, tmp;
  FILE *inFile = fopen("100.tall", "r");
  
  fscanf(inFile, "%d", &tmp);
  max = sum = tmp;

  for (i = 2; i <= 100; ++i) {
    fscanf(inFile, "%d", &tmp); 
    sum += tmp;
    if(tmp > max) {
      max = tmp;
    }
  }
  printf("Sum: %d, Max: %d\n", sum, max);
}


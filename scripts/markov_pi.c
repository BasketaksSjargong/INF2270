#include <stdlib.h>

double d_rand()
{
  return rand() / (RAND_MAX + 1.);
}

int main(int argc, char *argv[])
{
  double x = 1;
  double y = 1;
  double delta = 0.1;
  
  double del_x = 0;
  double del_y = 0;

  int n_trials = 4000;
  int n_hits = 0;

  for (i = 0; i < n_trials; ++i)
  {
    del_x = d_rand()   
  }
  return 0;
}

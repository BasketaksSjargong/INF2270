#include <stdio.h>
// Physical constants
float rho = 1.293;
float A = 0.45;
float C_d = 1.2;
float w = 0;
float m = 80;
float F = 400;

float force_model(float v){
  return (F + 0.5 * rho * C_d * A * (v - w) * (v - w));
}

int main(int argc, char *argv[])
{
  int time_steps = 1000; // Number of iterations
  int total_time = 10;   // Total time elapsed during race
  float dt = total_time / time_steps; // Change in time for each iteration

  // Declaring arrays. Assuming the size to be sufficiently small for it
  // to be used on the stack instead of the heap.
  float r[time_steps];
  float v[time_steps];
  float a[time_steps];

  // Initial values
  r[0] = 0;
  v[0] = 0;
  a[0] = 0;
  int i;
  for (i = 0; i < time_steps; ++i)
  {
    //TODO
    //This does not work, evaluates to 0 for some reason.
    //Fix later
    printf("v[%d]: %f\n",i,  v[i]);   
    printf("fm(vi): %f\n", force_model(v[i]));
    printf("%f\n", (force_model( v[i] ) / m ) * dt);
    v[i+1] = v[i] + (force_model( v[i] ) / m ) * dt;
  } 
  

  return 0;
}

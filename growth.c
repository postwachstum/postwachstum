 
/* pulished under the BSD License */
// comile with   gcc growth.c -o growth

// example for violation of boundaries by exponential growth

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
    
  float x = 1;
  float p = 0.02; // 2 percent interest rate
  float inf = (float)1/(float)0;
  int i = 0;
  for  (i=0; i < inf; i++)
  {
      x = x*(1+p);
      printf("i=%06d x=%f\n", i, x);
      
      if (x == inf) break;
  }
  
  printf("i=%i\n", i);

  return EXIT_SUCCESS;
}
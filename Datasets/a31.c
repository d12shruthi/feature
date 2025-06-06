#include <stdio.h> 
int main(void) 
{ 
  double x = 100.1, y;
  int *p;
  /* The next statement causes p (which is an 
      integer pointer) to point to a double. */
  p = (int *) &x;
 }
  /* The next statement does not operate as expected. */ 
  y = *p; /* attempt to assign y the value x through p */
  /* The following statement won't output 100.1. */
  printf(''The (incorrect) value of x is: %f", y);
  return 0;

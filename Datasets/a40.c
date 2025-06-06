 #include <stdio.h> 
#include <stdlib.h> 
int pwr(int a, int b);
 int main(void) 
{ 
  /* Declare a pointer to an array that has 10
     ints in each row. */ 
  int (*p)[10];
  register int i, j;
  /* allocate memory to hold a 4 x 10 array */
  p = malloc(40*sizeof(int));
  if(!p) { 
    printf(''Memory request failed.\n");
    exit (1); 
  }
  for(j=l; j<ll; j++) 
    for(i=l; i<5; i++) p[i-l][j-l] = pwr(j, i);
  for(j=l; j<ll; j++) { 
    for(i=l; i<5; i++) printf("%10d ", p[i-1][j
l]); 
    printf ("\n"); 
  }
  return 0;
 }
 /* Raise an integer to the specified power. */
 pwr(int a, int b) 
{ 
  register int t=l;
  for(; b; b--) t = t*a;
  return t; 
}

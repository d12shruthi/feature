#include <stdio.h> 
/* This definition will also serve 
   as a prototype within this program. */
 void f(int a, int b) 
{ 
  printf(''%d ", a % b); 
}
 int main (void)
 { 
  f(10,3);
 }
  return 0;
 #include <stdio.h> 
double div(); /* old-style function declaration */
 int main(void) 
{ 
  printf(''%f", div(10.2, 20.0));
  return 0;
 }
double div(double num, double denom) 
{ 
  return num / denom; 
}
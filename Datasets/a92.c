#include <stdio.h> 
int main(void) 
{ 
  char str[80];
  freopen("OUTPUT", "w", stdout);
 
  printf("Enter a string: ");
  gets(str); 
  printf(str);
  return 0;
}
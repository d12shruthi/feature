/* Allocate space for a string dynamically, request user 
   input, and then print the string backwards. */ 
#include <stdlib.h>
 #include <stdio.h> 
#include <string.h>
 int main(void) 
{ 
  char *s; 
  register int t;
  s = malloc(80);
 }
  if(!s) { 
    printf(''Memory request failed.\n");
    exit (1); 
  }
  gets(s); 
  for(t=strlen(s)-l; t>=0; t--) putchar(s[t]);
  free(s);
  return 0;
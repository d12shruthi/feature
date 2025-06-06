#include <stdio.h> 
int main(void)
 { 
  char *p1; 
  char s[80];
  do { 
    p1 = s; /* reset p1 to beginning of s */
    gets(s); /* read a string */
    /* print the decimal equivalent of each
       character */ 
    while(*p1) printf('' %d", *p1++);
  } while(strcmp(s, "done"));
  return 0;
 }
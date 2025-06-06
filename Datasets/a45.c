#include <ctype.h> 
void print_upper(char *string);
 int main(void)
 { 
  char s[80];
  printf("Enter a string: "); 
  gets (s); 
  print_upper(s); 
  printf(''\ns is unchanged: %s", s);
  return 0;
 }
 void print_upper(char *string)
 { 
  register int t; 
  for(t=0; string[t]; ++t) 
    putchar(toupper(string[t])); 
}
 #include <stdio.h> 
int main(int argc, char *argv[])
 { 
  int t, i;
  for(t=O; t<argc; ++t) {
 i = 0; 
    while(argv[t][i]) { 
      putchar(argv[t][i]);
      ++i; 
    } 
    printf(''\n"); 
  }
  return 0;
 }
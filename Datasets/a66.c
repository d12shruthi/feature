 #include <stdio.h> 
int main(void)
  unsigned num; 
  for(num=0; num < 16; num++) {
    printf(''%o ", num); 
    printf("%x ", num); 
    printf("%X\n", num); 
  }
  return 0;
}
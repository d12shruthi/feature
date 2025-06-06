void swap(int *x, int *y); 
int main (void)
 { 
  int i, j;
  i = 10;
  j = 20;
  printf("i and j before swapping: %d %d\n", i, j);
  return 0;
 }
  swap(&i, &j); /* pass the addresses of i and j */
  printf("i and j after swapping: %d %d\n", i, j);
 void swap(int *x, int *y)
 { 
  int temp;
 temp = *x;   /* save the value at address x */ 
  *x = *y;     /* put y into x */ 
  *y = temp;   /* put x into y */ 
}
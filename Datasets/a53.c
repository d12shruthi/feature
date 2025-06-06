void sqr_it(int *i); /* prototype */
 int main(void)
 { 
  int x;
  x = 10; 
  sqr_it(x);  /* type mismatch */
  return 0;
 }
 void sqr_it(int *i) 
{ 
  *i = *i * *i; 
}
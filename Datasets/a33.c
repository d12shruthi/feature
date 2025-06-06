 /* Index s as an array. */ 
void putstr(char *s) 
{ 
  register int t; 
  for(t=0; s[t]; ++t) putchar(s[t]);
 }
 /* Access s as a pointer. */
 void putstr(char *s) 
{ 
  while(*s) putchar(*s++); 
}

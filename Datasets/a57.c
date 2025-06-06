#include <stdio.h> 
 int main(void) 
{ 
  char choice; 
  init_list(); /* initialize the structure array */
  for(;;) { 
    choice = menu_select();
    switch(choice) { 
      case 1: enter(); 
        break; 
      case 2: delete(); 
        break; 
      case 3: list(); 
        break; 
      case 4: exit(0); 
    } 
  }
 }
  return 0;
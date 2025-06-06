 /* Save the list. */ 
void save(void) 
{ 
  FILE *fp; 
  register int i; 
  if((fp=fopen("maillist", "wb"))==NULL)  {
    printf(''Cannot open file.\n"); 
    return; 
  }
  for(i=0; i<MAX; i++) 
    if(*addr_list[i].name) 
      if(fwrite(&addr_list[i], 
         sizeof(struct addr), 1, fp)!=l) 
           printf("File write error.\n");
  fclose(fp);
 }
 /* Load the file. */
 void load(void) 
{ 
  FILE *fp; 
  register int i;
 if((fp=fopen("maillist",  "rb"))==NULL) { 
    printf(''Cannot open file.\n"); 
    return; 
  } 
  init_list(); 
  for(i=0; i<MAX; i++) 
    if(fread(&addr_list[i], 
      sizeof(struct addr), 1, fp)!=1)
        if(feof(fp)) break; 
        printf("File read error.\n");
    } 
  fclose(fp); 
}

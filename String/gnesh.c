#include <stdio.h>
#include <string.h>


void insert(char*,char,int);

int main()
{
  char name[10] = "Gnesh";
  char c = 'a';
  int index = 1;

  insert(name,c,index);

  printf("Name after insertion is %s\n",name);

  return 0;

 }

  void insert(char *str, char c, int index)
 {

    int len,i;
    
    len = strlen(str);

    for(i=len-1 ; i>=index ; i--)
   {
       *(str+i+1) = *(str+i);
  
   }
   
      *(str+index) = c;
 
     *(str+len+1) = '\0';
 }








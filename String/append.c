#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

void append(char *, char);




int main()
{

 char *name;
 
 name = (char*) malloc(sizeof(char)* N+1);

 
 gets(name);
 
 puts(name);

 append(name,'G');

 puts(name);
 
 

 printf("\n");
 
 return 0;

}




  void append(char *str,char c)
 
{

     int len;
    
     len = strlen(str);
     
     len++;
 
     str = (char*) realloc(str, sizeof(char) * (len + 1) );

       
    *(str+len-1) = c;


     *(str+len) = '\0' ;


}     


   




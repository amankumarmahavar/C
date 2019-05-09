#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void substring(char[],char[],int,int);

int main(int argc , char *args[])
{
    int len;
    char ext[2];

    len = strlen(args[1]);

    substring(args[1],ext,len-2,len);

    puts(ext);

    if(strcmp(ext,".c") == 0)
       printf("File Format Matched");

    else

        printf("Sorry, File format not matched");

   
    printf("\n");   



     return 0;
}


void substring(char str[],char sub[],int start_index, int end_index)
{
   int diff = end_index-start_index;
   
   int i;

  for(i=0; i<diff ; i++)
  {

     sub[i] = str[start_index+i];
 
  }
   sub[i] = '\0';


}


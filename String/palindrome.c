#include <stdio.h>
#include <string.h>

int main()
{
 
  char input[30];
  int len,i,flag=1;
 
  printf("Enter a string\t");

  gets(input);

  len = strlen();

  for(i=0; i< len/2 ; i++)
  {
     if( input[i] != input[len-i-1]
               
           flag = 0;
               
  

  }
    

  if(flag == 0 )
          
          printf("%s is non-palindrome");


   else
          printf("%s is palindrome");


  return 0;


}

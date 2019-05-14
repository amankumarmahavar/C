#include <stdio.h>
#include <string.h>

#define N 2

void is_palindrome(char[]);


int main()
{
  char input[2][20];
  int i,result;

  printf("Enter %d strings\n",N);

  for(i=0; i<N ; i++)
   {
        gets(input[i]);
   }
     
  for(i=0; i<N ;i++)
   {
      result = is_palindrome(input[i]);
     
      if(result)
             printf("%s is palindrome\n",input[i]);
  
      else
             printf("%s is non-palindrome\n",input[i]);
   }


 return 0;

}

  int is_palindrome(char input[])
 
{
    int i,len,flag=1;
     
    len = strlen(input);


  for(i=0; i< len/2 ; i++)
  {
     if( input[i] != input[len-i-1])
                  flag = 0;
               
  }
    
    return flag;


 }
       

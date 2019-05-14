/*
 *
 * Program to reverse a string without string handling function.
 * We create a function named 'reverse'.
 *
*/

#include <stdio.h>

void reverse(char []);
int get_length(char []);

int main()
{
  char input[30];
  
  printf("Enter a string\n");
  gets(input);
  printf("Before reverse : %s\n",input);
  reverse(input);
  printf("After reverse : %s\n",input);
  
 
  return 0;
}

void reverse(char str[])
{
 
  int len,i;
  char temp;

  len = get_length(str);
  
  for(i=0; i<len/2; i++)
  {
      temp = str[i];
      str[i] = str[len-i-1];
      str[len-i-1] = temp;
  }

}
  
int get_length(char str[])
{
 
    int i=0;
    
    while(str[i] != '\0')
    {
        i++;
    }

    return i;

 }









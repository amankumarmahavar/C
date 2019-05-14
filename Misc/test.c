#include <stdio.h>

#define N 3

char *get_day(int);

int main()
{

  char *day;
 
  day =  get_day(N);

  printf("Today is %s",day);

  return 0;

}

 char *get_day(int n)
{
 
  if(n==1)
     return "Sunday";
  
  else
      return "Other Day";

}

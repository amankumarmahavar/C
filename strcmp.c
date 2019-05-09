#include <stdio.h>
#include <string.h>

int compare_str(char[], char[]);

int main()
{

 char string1[20],string2[20];
 int result;

 

 puts("Enter two strings  ");
 fgets(string1,20,stdin);
 fgets(string2,20,stdin);

 result = compare_str(string1,string2);

 if(result == 0)
    printf("%s and %s are equal\n",string1,string2);

 else if(result == 1)
    printf("Alphabetical order :\n%s  %s\n",string2,string1);

 else if(result == -1)
    printf("Alphabetical order :\n%s  %s\n",string1,string2);



return 0;

}


int compare_str(char s1[], char s2[])
{

  int len,flag=0,i;

  len = strlen(s1);

  for(i=0; i<=len ;i++)
{

   if(s1[i] != s2[i])
    {
        if(s1[i] > s2[i])
          {
             flag = 1;
             break;
          }
 
        else
          {
              flag = -1;
              break;
          } 
    }
}

   if(i == len+1)
      flag = 0;

  return flag;

}

      
     

















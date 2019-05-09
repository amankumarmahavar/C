#include <stdio.h>

int main()
{
   char str[] = "this is c programming";
   int i=0;


   str[i] -= 32;

   while(str[i] != '\0')
   {

       if(str[i] == 32)
       {
          str[i] = '\n';
          str[i+1] -= 32 ;

       }

       i++;

   }


    puts(str);




    return 0;

}

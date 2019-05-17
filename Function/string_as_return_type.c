/*
 *
 * We return string through pointer pretty much similar to returning array 
 *
 *
*/

  #include <stdio.h>

  char *getString(void);

  int main()
  {
   
     char *name;

     name = getString();
      
     puts(name);
  
     return 0;

   }


   char *getString()
   {

       static char str[] = "Edward Norton"; 

      // if we intialize this as : char *str = "Edward Norton", static keyword is not needed.
      
      // Good practice to use static


       return str;

   }

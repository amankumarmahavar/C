/*
 *
 * Program to input five names from command line and displaying them.
 *
*/

 #include <stdio.h>
 
 #define N 5

 int main(int argc, char **args)
 {

     int i;

     for(i=1;i<=N;i++)  //command line arguments start from argv[1]
     {
       puts(args[i]);
     
     }

  return 0;

 } 

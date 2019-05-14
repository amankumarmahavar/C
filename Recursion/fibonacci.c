/*
 *
 * Program to print first N members of fibonacci series by using recursion
 *
 *
*/ 

  #include <stdio.h>

  int fib(int);

  int main()
  {
  
     int n,i;

     printf("How many terms you want to print\n");
     scanf("%d",&n);
  
     for(i=1;i<=n;i++)
     {
        printf("%d  ",fib(i));
     }
      
     printf("\n");

     return 0;

  }

  int fib(int n)
  {
   
     if(n==1)
         return 0;

     else if(n==2)
          return 1;

     else 
          return fib(n-1)+fib(n-2);

  }

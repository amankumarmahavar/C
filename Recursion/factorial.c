/*
 *
 * Program to calculate the factorial of a number by using recursion
 *
 *
*/ 

 #include <stdio.h>

 unsigned long factorial(int);

 int main()
 {

     int num;
     unsigned long int fact;

     printf("Enter a number\n");
     scanf("%d",&num);
     fact = factorial(num);
     printf("Factorial of %d is %lu\n",num,fact);
   
     return 0;
 
 }


  unsigned long factorial(int n)
  {
     
     if(n == 1)
          return 1;


     else
          return n*factorial(n-1);
    
         

  }

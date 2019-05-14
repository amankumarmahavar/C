/*
 *
 * Program to calculate the sum of first n natural numbers by using recursion
 *
 *
*/ 

 #include <stdio.h>

 int getSum(int);

 int main()
 {
 
   int n,sum;
   
   printf("How many numbers' sum you want\n");
   scanf("%d",&n);
   sum = getSum(n);
   printf("Sum of first %d numbers is %d\n",n,sum);

   return 0;
 
 }
 
 int getSum(int n)
 {
 
    if(n==0)
         return 0;

  
    else
         return n+getSum(n-1);


 }

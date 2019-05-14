/*
 *
 * Program to calculate the sum of digits of a number by using recursion
 *
 *
*/ 

 #include <stdio.h>

 int sum_of_digits(int);

 int main()
 {
  
     int num,sum;
  
     printf("Enter a num\n");
     scanf("%d",&num);
 
     sum = sum_of_digits(num);
     printf("sum of digits of %d = %d\n",num,sum); 

     return 0;
 
  }
 
 
  int sum_of_digits(int num)
  {
  
      int digit;

      if(num>0)
      {
         digit = num%10;
         return digit+sum_of_digits(num/10);
      }

      else
         return 0;

  }

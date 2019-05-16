/*
*   Program to find out the greatest digit in a number
*/

 #include <stdio.h>

 int get_max_digit(int);

 int main()
 {
 
  int num,max_digit;

  printf("Enter a number :");
  scanf("%d",&num);

  max_digit = get_max_digit(num);

  printf("Maximum digit in %d is %d\n",num,max_digit);

  return 0;

  }

  int get_max_digit(int num)
  {

     int max,digit;

     max = num%10; //assigning last digit to max

     while(num>0)
     { 
        digit = num%10;
        
        if(digit>max)
             max = digit;
        
         num = num/10;

     }

     return max;

   }    
 
















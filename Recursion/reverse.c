/*
 *
 * Program to calculate the reverse of a number by using recursion
 *
 *
*/ 

  #include <stdio.h>

  int get_reverse(int);

  int main()
  {

      int num,reverse;
   
      printf("Enter a number\n");
      scanf("%d",&num);
      reverse = get_reverse(num);
      printf("Reverse of %d is %d\n",num,reverse);
     
      return 0;
   
  }


  int get_reverse(int num)
  {

      static int reverse ;
      int digit;

      if(num>0)
      {
         digit = num%10;
         reverse = reverse*10 + digit;
         get_reverse(num/10);
      }
  
     return reverse;

  }

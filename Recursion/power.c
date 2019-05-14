/*
 *
 * Program to calculate the value of a number raised to certain power by using recursion
 *
 *
*/ 

  #include <stdio.h>
  #include <stdlib.h>

  float power(float,int);

  int main()
  {

    float base,result;
    int expo;

    printf("Base = ");
    scanf("%f",&base);   
    printf("Expo = ");
    scanf("%d",&expo);
    result = power(base,expo);
    printf("%.3f^%d = %.3f\n",base,expo,result);
    
    return 0;
 
  }

  float power(float base, int expo)
  {
 
      if(expo  < 0)
      {
          printf("Exponential cannot be negative\n");
          exit(1);
      }

 
      else if(expo == 0)
           return 1.0;

      else
           return base*power(base,expo-1);
 
   }  
  

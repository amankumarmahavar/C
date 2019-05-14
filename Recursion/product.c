/*
 *
 * Program to calculate the product of two numbers by using recursion
 *
 *
*/ 

 #include <stdio.h>

 int getProduct(int,int);

 int main()
 {

     int a,b,product;

      printf("a = ");
      scanf("%d",&a);
      printf("b = ");
      scanf("%d",&b);
      product = getProduct(a,b);
      printf("%d x %d = %d\n",a,b,product);   
  
      return 0;

 }

  int getProduct(int a,int b)
  {
     
       if(a<b)
           return getProduct(b,a);

       else if(b == 0)
            return 0;

       else
            return a+getProduct(a,b-1);


  }
 

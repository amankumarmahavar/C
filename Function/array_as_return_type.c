/*
 * 1. C programming does not allow to return an entire array from a function.
 * 
 * 2. Instead we can return a pointer to an array, we want to return.
 *
 * 3. Also C doesnot allow to return the address of local variable outside the function as it gets destroyed when function is accomplished.
 *
 * 4. To keep the life of the array(we want to return) alive during whole program, we make it static.
 *
*/

  #include <stdio.h>
  
  int *getArray(void);

  int main()
  {
   
       int *num,i;
 
       num = getArray();

       for(i=0;i<5;i++)
       {
          printf("%d ",num[i]);
          
       }

       printf("\n");

       return 0;

  }

   int *getArray()
   {

      static int arr[] = {1,2,3,4,5};

      return arr;
   
    }
      
 
       

#include <stdio.h>

#define N 5

int main()
{
    int i,j,k,l;


    for(i=0; i<N; i++)
    {
       for(j=1; j<= N-i; j++)
       {
          printf("%d\t",j);
       }

       for(k=j-2; k>0 ;k --)
       {
         printf("%d\t",k);
       }

       printf("\n");

       for(l=0; l<=i; l++)
          printf("\t");

    }











  return 0;
}

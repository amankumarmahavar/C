#include <stdio.h>

#define N 5

int main()
{

 int i,j,k;

 for(i=0;i<N;i++)
 {
     for(j=1; j<= N-i  ; j++)
     {
        printf("%d\t",j);
     }

     printf("\n");

     for(k=0;k<=i;k++)
     {
         printf("\t");
     }
 }







 return 0;
}

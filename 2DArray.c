// Using 2D array without pointer

#include <stdio.h>


int main()
{

  int matrix1[10][10],matrix2[10][10],matrix3[10][10];
  int m,n,p,q,i,j,k,partsum=0;

  do
  {
    printf("Enter row and column of first matrix\n");
    scanf("%d%d",&m,&n);

    printf("Enter row and columnn of second matrix\n");
    scanf("%d%d",&p,&q);

  }while(n != p);

printf("Enter elements for matrix1\n");

for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
     scanf("%d",&matrix1[i][j]);
  }
}


printf("Enter elements for matrix2\n");

for(i=0;i<p;i++)
{
  for(j=0;j<q;j++)
  {
     scanf("%d",&matrix2[i][j]);
  }
}

for(i=0;i<m;i++)
{
   for(j=0;j<q;j++)
   {
      for(k=0;k<n;k++)
      {
         partsum += matrix1[i][k] * matrix2[k][j];
      }
      matrix3[i][j] = partsum;
      partsum = 0;
   }
}

printf("Matrix1: \n");

for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   {
      printf("%d\t",matrix1[i][j]);
    }
  printf("\n");
}

printf("Matrix2: \n");

for(i=0;i<p;i++)
{
   for(j=0;j<q;j++)
   {
      printf("%d\t",matrix2[i][j]);
    }
  printf("\n");
}

printf("Matrix3: \n");

for(i=0;i<m;i++)
{
   for(j=0;j<q;j++)
   {
      printf("%d\t",matrix3[i][j]);
    }
  printf("\n");
}



return 0;


}





















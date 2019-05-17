#include <stdio.h>
#include <stdlib.h>

void readMat(int (*)[3],int (*)[3]);
void processMat(int (*)[3],int(*)[3],int(*matProd)[3]);
void displayMat(int(*)[3]);

int i,j;


int main()
{
         int *mat1[3],*mat2[3],*matProd[3],i;
         
         //Allocating memory dynamically
         
         for(i=0;i<3;i++)
         {
            mat1[i] = (int*) malloc(3*sizeof(int));
            mat2[i] = (int*) malloc(3*sizeof(int));
            matProd[i] = (int*) malloc(3*sizeof(int));
          
         }
         
         for(i=0;i<3;i++)
         {
              if(mat1[i]==NULL || mat2[i]==NULL || matProd[i]==NULL)
              {
               printf("Not enough memory\n");
               exit(1);
              }
         }

         // the global varibles need not to be passed in the function
         // if you want to pass the variable into function make it local


        readMat(mat1,mat2);

        processMat(mat1,mat2,matProd);
        printf("The product of matrices is:\n");
        displayMat(matProd);


 return 0;
}


void readMat(int (*mat1)[3],int (*mat2)[3])
{
    printf("Enter first Matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {    printf("[%d,%d]\t",i+1,j+1);
            scanf("%d", *(mat1+i)+j );
        }
    }

    printf("Enter second Matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("[%d,%d]\t",i+1,j+1);
            scanf("%d",*(mat2+i)+j );
        }
    }
}

void processMat(int (*mat1)[3],int(*mat2)[3],int(*matProd)[3])
{
    int partsum=0,k;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                   partsum += *(*(mat1+i)+k) *  *(*(mat2+k)+j);
            }

        *(*(matProd+i)+j)=partsum;
        partsum=0;

        }


    }
}

void displayMat(int(*matProd)[3])
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d  ",*(*(matProd+i)+j));

    printf("\n");
}
}


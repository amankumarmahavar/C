//program to perform various algorithms on array of 5 elements using function and pointer

#include <stdio.h>
#include <stdlib.h>

#define N 5

void read_array(int *);
void display_array(int *);
int get_sum(int *);
int get_average(int *);
int get_max(int *);
int get_min(int *);
void ascend(int *);
void descend(int *);

int main()
{
  int num[N],max,min,sum,avg,choice;

  printf("Enter %d numbers\n",N);
  read_array(num);
  printf("\n\n");

  while(1)
  {
    printf("Menu :\n");
    printf("1.Sum of elements\n");
    printf("2.Average of elements\n");
    printf("3.Greatest element\n");
    printf("4.Smallest element\n");
    printf("5.Sort in Ascending order\n");
    printf("6.Sort in Descending order\n");
    printf("7.Exit\n");

    scanf("%d",&choice);

    switch(choice)
    {
      case 1:
             sum = get_sum(num);
             printf("Sum of elements is %d",sum);
             break;

      case 2:
             avg = get_average(num);
             printf("Average of elements is %d",avg);
             break;

      case 3:
             max = get_max(num);
             printf("Maxium element is %d",max);
             break;

      case 4:
            min = get_min(num);
            printf("Minimun element is %d",min);
            break;

      case 5:
            ascend(num);
            printf("Ascending order :\n");
            display_array(num);
            break;

      case 6:
            descend(num);
            printf("Descending order :\n");
            display_array(num);
            break;


      case 7:
             exit(1);

      default :
               printf("Invalid input");
    }

     printf("\n\n");


}

 return 0;
}

void read_array(int *arr)
{
  int i;

  for(i=0;i<N;i++)
  {
    scanf("%d",arr+i);
  }

}

void display_array(int *arr)
{
  int i;

  for(i=0;i<N;i++)
  {
    printf("%d\t",*(arr+i));
  }
}

int get_sum(int *arr)
{
   int i,sum=0;

   for(i=0;i<N;i++)
   {
     sum += *(arr+i);
   }

  return sum;
}

int get_average(int *arr)
{
  int i,average;

  average = get_sum(arr) / N;

  return average;

}

int get_max(int *arr)
{
  int i,max;

  max = *arr;

  for(i=1;i<N;i++)
  {
     if(*(arr+i) > max)
         max = *(arr+i);

  }
  return max;

}

int get_min(int *arr)
{
  int i,min;

  min = *arr;

  for(i=1;i<N;i++)
  {
    if( *(arr+i) < min)
        min = *(arr+i);
  }
  return min;
}

void ascend(int *arr)
{
  int i,j,temp;

  for(i=0; i<N-1; i++)
  {
    for(j=i+1;j<N;j++)
    {
      if( *(arr+i) > *(arr+j))
      {
         temp = *(arr+i);
         *(arr+i) = *(arr+j);
         *(arr+j) = temp;
      }
    }
  }
}

void descend(int *arr)
{
  int i,j,temp;

  for(i=0; i<N-1; i++)
  {
    for(j=i+1;j<N;j++)
    {
      if( *(arr+i) < *(arr+j))
      {
         temp = *(arr+i);
         *(arr+i) = *(arr+j);
         *(arr+j) = temp;
      }
    }
  }
}

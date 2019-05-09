/*
program to perform operations :
1.adding element (at last index)
2.removing element (from last index)
3.inserting element at index
4.deleting element from index
*/

#include <stdio.h>
#include <stdlib.h>

void display(int *);
void add(int *,int);
void remov(int *);
void insert(int *,int,int);
void del(int *,int);

int capacity;

int main()
{
  int *num,i,choice,n,pos;
  num = NULL;

  printf("How many elements\n");
  scanf("%d",&capacity);

  num = (int *) malloc(sizeof(int)*capacity);

  if(num == NULL)
  {
     printf("No enough memory");
     exit(1);
  }

  printf("Enter elements\n");

  for(i=0;i<capacity;i++)
  {
     scanf("%d",num+i);
  }

  display(num);
  printf("\n\n");

  while(1)
  {
    printf("Menu :\n");
    printf("1.Add an element\n");
    printf("2.Remove an element\n");
    printf("3.Insert an element\n");
    printf("4.Delete an element\n");
    printf("5.Display\n");
    printf("6.Exit\n");

    scanf("%d",&choice);

    switch(choice)
    {

      case 1:
             printf("Enter element to add :  ");
             scanf("%d",&n);
             add(num,n);
             printf("%d added succesfully",n);
             break;


      case 2:
             remov(num);

             break;

      case 3:
             printf("Enter element :  ");
             scanf("%d",&n);
             printf("Enter position : ");
             scanf("%d",&pos);
             insert(num,n,pos-1); // since index = position-1
             printf("%d inserted successfully at %d position",n,pos);
             break;

      case 4:
             printf("Enter position to delete : ");
             scanf("%d",&pos);
             del(num,pos-1);
             printf("element deleted successfully from %d postion",pos);
             break;

      case 5 :
              display(num);
              break;


      case 6:
             exit(2);

      default:
             printf("Invalid Input");


    }

     printf("\n\n");



}

return 0;
}


void display(int *arr)
{
   int i;

   for(i=0;i<capacity;i++)
   {
     printf("%d\t",*(arr+i));
   }
}

void add(int *arr,int element )
{
   capacity++;

   arr = (int *) realloc(arr,capacity*sizeof(int));

   *(arr+capacity-1) = element;

}

void remov(int *arr)
{
   if(capacity != 0)
   {
   capacity--;
   arr = (int *)realloc(arr,capacity*sizeof(int));
   printf("Element removed successfully");
   }

   else
   {
     printf("No elements in array");
   }

}

void insert(int *arr,int element, int index)
{
   int i;

   capacity++;

   arr = (int *) realloc(arr,capacity*sizeof(int));

   for(i=capacity-1; i>index; i--)
   {
      *(arr+i) = *(arr+i-1);
   }

   *(arr+index) = element;

}

void del(int *arr,int index)
{
  int i;

  for(i=index ; i<capacity-1 ;i++)
  {
     *(arr+i) = *(arr+i+1);
  }

  capacity--;

  arr = (int *) realloc(arr,capacity*sizeof(int));

}

#include <stdio.h>

#define N 5

void sort(int*);
void cpy(int*, int*);

int main()
{

 int contestant[N],con[N],choice,i;
 char repeat = 'y';

 contestant[0] = 0;
 contestant[1] = 0;
 contestant[2] = 0;
 contestant[3] = 0;
 contestant[4] = 0;

 while( repeat == 'y' )
 {
  
    printf("Press :\n1 to vote Contestant 1\n2 to vote Contestant 2\n3 to vote Contestant 3\n4 to vote Contestant 4\n5 to vote Contestant 5");
    
    printf("\n");

    scanf("%d",&choice);
  
    if(choice == 1 )
           
           contestant[0]++;


    else if(choice == 2 )
           
           contestant[1]++;

 
    else if(choice == 3 )
           
           contestant[2]++;

  

    else if(choice == 4 )
           
           contestant[3]++;
 
 
    else if(choice == 5 )
           
           contestant[4]++;


   else 
  
       printf("Invalid vote\n");


   printf("Do you want to vote more (y/n) ");

   scanf(" %c",&repeat);
 
   printf("\n");

  
 }

   cpy(con,contestant);
 
   sort(con);

   for(i=0; i<N ;i++)
 
  {

      if(contestant[i] == con[2])
            printf("First = %d Contestant\nVotes = %d\n\n",i+1,con[2]);
  }

  for(i=0; i<N ;i++)
 
  {
    if(contestant[i] == con[1])
            printf("Second = %d Contestant\nVotes = %d\n\n",i+1,con[1]);
      
  }


  for(i=0; i<N ;i++)
  {
       if(contestant[i] == con[0])
            printf("Third = %d Contestant\nVotes = %d\n",i+1,con[0]);
    
  }

 
    printf("\n");



return 0;

}


void sort(int *arr)
{

  int i,j,temp;

 for(i=0; i< N-1 ; i++)
  {
    
    for(j=0; j<N ; j++)
    {
      
       if( *(arr+i) > *(arr+j) )
        {

           temp = *(arr+i);
           *(arr+i) = *(arr+j);
           *(arr+j) = temp;

        }

    }
           
  }          
    
}        
   
     
 void cpy(int *dest, int *source)
{

  int i;

 for(i=0;i<N;i++)
   {
      *(dest+i) = *(source+i);
 
   }

}
  
      












 









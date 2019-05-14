#include <stdio.h>

void tower_of_hanoi(int,char,char,char);



int main()
{

  int n;

  printf("Enter no. of discs\t");
  scanf("%d",&n);

  tower_of_hanoi(n,'A','B','C');


  return 0;

}

void tower_of_hanoi(int n, char source, char aux , char dest)
{
 // source -- A
 // auxiliary or intermediate -- B
 // destination -- C

 static int i;

 if(n == 1)
 {
      i++;
      printf("Step %d : Move disc 1 from %c to %c\n",i,source,dest);

      return ;
 }


 tower_of_hanoi(n-1,source,dest,aux);

 i++;
 printf("Step %d : Move disc %d from %c to %c\n",i,n,source,dest);

 tower_of_hanoi(n-1,aux,source,dest);




}

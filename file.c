#include <stdio.h>
#include <stdlib.h>

#define N 1

typedef struct football
{
    char player_name[30];
    char country_name[30];
    int goal_scored;
 
}FOOTBALL;


int main()
{

   FILE *fptr;
   FOOTBALL player[N],player1[N];
   int i;
  
   fptr = fopen("info.txt","w+");

   if(fptr == NULL)
   {
      printf("Error in file opening\n");
      exit(1);
   }

    printf("%ld",sizeof(FOOTBALL));
    exit(2);

   printf("Enter player info :\n");

   for(i=0;i<N;i++)
   {
      fflush(stdin);

      printf("Player %d\n",i+1);
      
      printf("Enter name\t");
      fgets(player[i].player_name,30,stdin);
      
      printf("Enter country\t");
      fgets(player[i].country_name,30,stdin);

      printf("Enter goals scored\t");
      scanf("%d",&player[i].goal_scored);

      printf("=========================================\n");

    }

  fwrite(&player,sizeof(player),N,fptr);

  rewind(fptr);
 
  fread(&player,sizeof(player1),N,fptr);

     









  fclose(fptr);
   






 return 0;
}

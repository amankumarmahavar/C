/*
 *  
 *  Program to manipulate the structure with the help of menu and functions
 *
 *
*/
 
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  #define N 5

  typedef struct student
  {
     char name[30],faculty[30];
     int roll;
    
  }STUDENT;

  
  void display(STUDENT []);
  void search_by_roll(STUDENT [],int);
  void search_by_faculty(STUDENT [], char[]);
  
  int main()
  {
 
      STUDENT s[N];
      int i,choice,roll;
      char faculty[30];

      for(i=0;i<N;i++)
      {
         printf("Name : ");
         scanf("%s",s[i].name);
         printf("Faculty : ");
         scanf("%s",s[i].faculty);
         printf("Roll : ");
         scanf("%d",&s[i].roll);

         printf("==========================\n\n");
  
      }

      while(1)
      {
      	 printf("Enter your choice\n");
         
         printf("1. Display Students\n");
         printf("2. Search Student by Roll\n");
         printf("3. Search Student by Faculty\n");
         printf("4. Exit\n");

         scanf("%d",&choice);
     
         switch(choice)
         {
            case 1:
                   display(s);
                   break;

            case 2:
                   printf("Enter roll no. you want to search : ");
                   scanf("%d",&roll);
 	           search_by_roll(s,roll);
                   break;
 
            case 3:
                   printf("Enter faculty you want to search : ");
                   scanf("%s",faculty);
 	           search_by_faculty(s,faculty);
                   break;

            case 4:
                   exit(1);
         
            case 5:
                   printf("Invalid Input\n");

         }

     }

     return 0;

 }


    // Functions Definitions

     void display(STUDENT s[])
     {
        int i;
 
        printf("Student Info :\n");
         
        for(i=0;i<N;i++)
        {
           printf("Name : %s\n",s[i].name);
           printf("Faculty : %s\n",s[i].faculty);
           printf("Roll No : %d\n",s[i].roll);
           
           printf("====================\n");
        }

      }

        
      void search_by_roll(STUDENT s[], int roll)
      {
          int i;

          for(i=0;i<N;i++)
          {
             if(s[i].roll == roll)
             {
               printf("Name : %s\n",s[i].name);
               printf("Faculty : %s\n",s[i].faculty);
               printf("Roll No : %d\n",s[i].roll);
            
               printf("====================\n");
               break;
          
              }
           
          }
         
          if(i==N)
              printf("Roll %d not found\n",roll);
         
   
 
      }


       void search_by_faculty(STUDENT s[], char faculty[])
      {
          int i;

          for(i=0;i<N;i++)
          {
             if(strcmp(s[i].faculty,faculty) == 0)
             {
               printf("Name : %s\n",s[i].name);
               printf("Faculty : %s\n",s[i].faculty);
               printf("Roll No : %d\n",s[i].roll);
            
               printf("====================\n");
               break;
          
              }
           
          }
 
          if(i==N)
               printf("Faculty %s not found\n",faculty);
 
      }















           
































      








      
     
    













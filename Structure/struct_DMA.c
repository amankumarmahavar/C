/*
 * Dynamically Allocating Memory for Structure using malloc 
 *
 *
*/

  #include <stdio.h>
  #include <stdlib.h>
  
  typedef struct student
  {
     char name[30],faculty[30];
     int roll;
    
  }STUDENT;


  int main()
  {
      int n,i;
       
      STUDENT *s;
  
      printf("How many records you want to enter\n");
      scanf("%d",&n);

      s = (STUDENT*) malloc(n * sizeof(STUDENT));

      printf("Enter student info\n");
     
      for(i=0;i<n;i++)
      {
         printf("Student %d\n",i+1);

         printf("Name : ");
         scanf("%s",s[i].name);
         printf("Faculty : ");
         scanf("%s",s[i].faculty);
         printf("Roll : ");
         scanf("%d",&s[i].roll);

         printf("==========================\n\n");
  
      }


       printf("Student Info :\n");
         
       for(i=0;i<n;i++)
       {
           printf("Name : %s\n",s[i].name);
           printf("Faculty : %s\n",s[i].faculty);
           printf("Roll No : %d\n",s[i].roll);
           
           printf("====================\n");
       }

       return 0;

      }
     
     


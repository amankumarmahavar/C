/*
 **
 ** Program to record students' information using structure.
 **
 **
*/
 
 #include <stdio.h>
 
 #define N 3

 typedef struct date
 {
    int day,month,year;
 
 }DATE;

 
 typedef struct student
 {
    char name[30];
    int roll;
    DATE d;
 
 }STUDENT;


 int main()
 {
  
     int i;
     STUDENT s[N]; 

     printf("Enter student info\n");

     for(i=0;i<N;i++)
     {
         printf("Student %d :\n",i+1);
         printf("Name : ");
         scanf("%s",s[i].name);
         printf("roll : ");
         scanf("%d",&s[i].roll);
         printf("day month year :");
         scanf("%d%d%d", &s[i].d.day,&s[i].d.month,&s[i].d.year);

         printf("==================================================\n\n");


     }

     for(i=0;i<N;i++)
     {
         printf("Student %d :\n",i+1);
         printf("Name : %s\n",s[i].name);
         printf("roll : %d\n",s[i].roll);
         printf("date of birth : %d-%d-%d\n",s[i].d.day,s[i].d.month,s[i].d.year);
         printf("==================================================\n");


      }    
       
      return 0;

  }



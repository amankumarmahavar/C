/*
 *  Returning structure from a function.
 *  
 * It is quite similar as returning primitive variables.
 *
*/

  #include <stdio.h>
  #include <string.h>

  typedef struct STUDENT
  {
     char name[30],faculty[30];
     int roll;

  } STUDENT;


  STUDENT getStudentData()
  {
     // This method set student data and return whole structure

      STUDENT s;
      strcpy(s.name,"Edward Norton");
      strcpy(s.faculty,"Engineering");
      s.roll = 311;
  
      return s;

   }

   int main()
   {
  
      STUDENT s = getStudentData();

      printf("%d  %s  %s",s.roll,s.name,s.faculty);
      printf("\n");
       
      return 0;

   }




       
       

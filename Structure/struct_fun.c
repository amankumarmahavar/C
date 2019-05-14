#include <stdio.h>

typedef struct student
{
   char name[20];
   int roll;
   float marks;

}STUDENT;

void read(STUDENT *);
void display(STUDENT *);
void show(STUDENT);
void change(STUDENT *);

int main()
{

  STUDENT stu ;

  read(&stu);
  display(&stu);
  show(stu);

  change(&stu);

  display(&stu);


  return 0;

}

void read(STUDENT *st)
{

   printf("Enter info:\n");

   printf("Enter name\t");
   gets(st->name);

   printf("Enter roll\t");
   scanf("%d",&st->roll);

   printf("Enter marks\t");
   scanf("%f",&st->marks);


}


void display(STUDENT *st)
{
  printf("Name : %s\nRoll : %d\nMarks : %f\n",st->name,st->roll,st->marks);

}


void show(STUDENT st)
{
  printf("\n\nName : %s\nRoll : %d\nMarks : %f\n",st.name,st.roll,st.marks);

}


void change(STUDENT *st)
{
    st->roll = 5;


}








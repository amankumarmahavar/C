#include <stdio.h>

// sorting strings by using function

void read(char (*)[]);
//void sort(char (*)[]);
void display(char (*)[]);

int main()
{
  char name[3][10];

  read(name);

  display(name);








return 0;
}

void read(char (*str)[10])
{
 int i;
  printf("Enter 3 names\n");

  for(i=0;i<3;i++)
  {
     gets(*(str+i));
  }
}

void display(char (*str)[10])
{
 int i;
  printf("3 names are:\n");

  for(i=0;i<3;i++)
  {
     puts(*(str+i));
  }
}

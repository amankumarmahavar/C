#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

 FILE *fptr;
 char file_name[100];
 char ch;
 int line=0;

  //strcpy(file_name,"/home/bimal/Documents/cover/agecare.txt");

 printf("Enter the file with proper location\n");
 gets(file_name);

 fptr = fopen(file_name,"r");

 if(fptr == NULL)
    {
       printf("Sorry, file doesnot exist");
       exit(1);
    }

 while( (ch=fgetc(fptr)) != EOF )
   {
    
     if(ch == '\n')
        line ++;

   }

 printf("No. of lines in your file is %d",line);

 printf("\n");

 fclose(fptr);
   


 return 0;

}

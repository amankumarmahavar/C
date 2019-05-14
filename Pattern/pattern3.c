#include <stdio.h>

int main()
{
	int i,j,n;

        puts("Enter number : ");
        scanf("%d",&n);

	for(i=0;i<n;i++)
        {
	   for(j=1;j<= (2*i+1) ; j++)
           {
                if(j== i+1)
		{
                    printf("%d",j);
                }
   
                else
                {
                    printf("%d",0);
                }
       
           }

           printf("\n");

        }
			










return 0;
}

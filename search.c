#include<stdio.h>

int main()
{
	int a[100],i,n,num;

	printf("enter how many elements\t");
	scanf("%d",&n);

	printf("enter %d numbers\n",n);
	
        for(i=0;i<n;i++)
	 {
		scanf("%d",&a[i]);
		
	 }
	
        printf("the elements are:");
 	 
        for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		
	}
	

        printf("enter the element you want to search");
	scanf("%d",&num);
	
        for(i=0;i<n;i++)
	{
		if(num==a[i])
		{
		   printf("%d found at position %d\n",num,i+1);
                   break;
		}
	}
	
	if(i == n)
              printf("%d not found in the array\n",num);


    return 0;

}

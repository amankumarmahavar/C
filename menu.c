#include <stdio.h>
#include <stdlib.h>


int get_reverse(int);
int get_sum_of_digits(int);
int is_prime(int);

int main()
{
    int choice,num,reverse,sum,result;

    while(1)
   {
        puts("Press:\n1 For reversing the number\n2 For getting sum of digits\n3 For checking prime\n4 For exit");
        scanf("%d",&choice);

       switch(choice)
       {
           case 1:
               puts("Enter a number");
               scanf("%d",&num);
               reverse = get_reverse(num);
               printf("The reverse of %d is %d",num,reverse);
               printf("\n\n");
               break;


           case 2:
               puts("Enter a number");
               scanf("%d",&num);
               sum = get_sum_of_digits(num);
               printf("Sum of digits of %d is %d",num,sum);
               printf("\n\n");
               break;

            case 3:
               puts("Enter a number");
               scanf("%d",&num);
               result = is_prime(num);
               if(result)
                 printf("%d is prime",num);
               else
                 printf("%d is non-prime",num);
                 printf("\n\n");
                break;


            case 4:
                exit(0);

            default :
                puts("Invalid input");
                printf("\n\n");


        }
    }
     return 0;
}



int get_reverse(int num)
{
    int digit,rev=0;

    while(num != 0)
    {
        digit = num%10;
        rev = rev*10 + digit;
        num = num/10;
    }

    return rev;
}



int get_sum_of_digits(int num)
{
    int digit,sum=0;

    while(num != 0)
    {
        digit = num%10;
        sum += digit;
        num = num/10;
    }

    return sum;
}



int is_prime(int num)
{
    int i;

    for(i=2;i<num;i++)
    {
        if(num%i==0)
            return 0;
    }

    if(i==num)
        return 1;
}

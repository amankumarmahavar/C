#include <stdio.h>

#define VAT 0.13
#define TELECOME_TAX 0.10

int main()
{

 float data,charge,vat,telecome_tax,total_charge;
 char repeat;

 do {

 printf("Enter volume of data  ");
 scanf("%f",&data);

 if(data <= 300)
 {
    charge = 1500;

 }

 else if( data <= 500)
 {

   charge = 1500 + (data-300)*3;

 }

 else if( data > 500 )
 {
    charge = 1500 + 200*3 + (data-500)*1 ;

 }

 telecome_tax = charge * TELECOME_TAX ;

 vat = (charge + telecome_tax) * VAT ;

 total_charge = charge + telecome_tax + vat ;

 printf("Info :\n");
 printf("==============================\n\n");
 printf("Data used = %f GB\n",data);
 printf("Data charge = %.3f\n",charge);
 printf("Telecome tax = %.3f\n",telecome_tax);
 printf("Vat Amount = %.3f\n",vat);
 printf("--------------------------------\n");
 printf("Grand Total : %.3f",total_charge);

 printf("\n\n");

 printf("Do you want to continue?(y/n)");
 scanf(" %c",&repeat);


 printf("\n\n");

}
while(repeat == 'y' || repeat == 'Y');


 return 0;
}

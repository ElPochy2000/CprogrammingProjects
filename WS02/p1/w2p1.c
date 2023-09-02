/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  : 
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/


#include <stdio.h>

int main()
{
    float Sprice = 0;
    float Mprice = 0;
    float Lprice = 0;
    int Nbought= 0;
    float Tax= 0.13;
    float Totalprice;
    float PriceTax;
    float TOTAL;
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%f",&Sprice);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%f",&Mprice);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%f",&Lprice);
    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $");
    printf("%.2f",Sprice);
    printf("\nMEDIUM : $");
    printf("%.2f",Mprice);
    printf("\nLARGE  : $");
    printf("%.2f",Lprice);
    printf("\n\nPatty's shirt size is"" 'S'""\n");
    printf("Number of shirts Patty is buying: ");
    scanf("%d",&Nbought);
    printf("\nPatty's shopping cart...\nContains : ");
    printf("%d",Nbought);
    Totalprice =Nbought*(float) Sprice;
    PriceTax=Totalprice*(float)Tax;
    PriceTax= PriceTax*100;
    PriceTax=PriceTax+0.5;
    PriceTax=(int)PriceTax;
    PriceTax=(float)PriceTax/100;
    printf(" shirts\nSub-total: $");
    printf("%.4f",Totalprice);
    printf("\nTaxes    : $ ");
    printf("%.4f",PriceTax);
    TOTAL=PriceTax+Totalprice;
    printf("\nTotal    : $");
    printf("%.4f",TOTAL);
    return 0;

}
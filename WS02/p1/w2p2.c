/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  : Thiago Flores  
Student ID#: 150237220
Email      : tflores4@myseneca.ca
Section    : NJJ

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //List of Variables
    float Sprice = 0;
    float Mprice = 0;
    float Lprice = 0;
    int NboughtS= 0;
    int NboughtM=0;
    int NboughtL=0;
    float Tax= 0.13;
    char Patty []= "S";
    char Sally []= "M";
    char Tommy []= "L";
    float TotalpricePatty;
    float TotalpriceSally;
    float TotalpriceTommy;
    float PriceTaxPatty;
    float PriceTaxSally;
    float PriceTaxTommy;
    float TOTALpatty;
    float TOTALTommy;
    float TOTALSally;
    float SuperTotal;
    float SuperSubTotal;
    float SuperTax;

    //Set shirt prices
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%f",&Sprice);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%f",&Mprice);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%f",&Lprice);

    //Repeat prices
    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $");
    printf("%.2f",Sprice);
    printf("\nMEDIUM : $");
    printf("%.2f",Mprice);
    printf("\nLARGE  : $");
    printf("%.2f",Lprice);

    //Pattys part
    printf("\n\nPatty's shirt size is"" 'S'""\n");
    printf("Number of shirts Patty is buying: ");
    scanf("%d",&NboughtS);
    TotalpricePatty =NboughtS*(float) Sprice;
    PriceTaxPatty=TotalpricePatty*(float)Tax;
    PriceTaxPatty= PriceTaxPatty*100;
    PriceTaxPatty=PriceTaxPatty+0.5;
    PriceTaxPatty=(int)PriceTaxPatty;
    PriceTaxPatty=(float)PriceTaxPatty/100;
    TOTALpatty=PriceTaxPatty+(float)TotalpricePatty;

    //Tommys part
    printf("\nTommy's shirt size is"" 'L'""\n");
    printf("Number of shirts Tommy is buying: ");
    scanf("%d",&NboughtL);
    TotalpriceTommy =NboughtL*(float) Lprice;
    PriceTaxTommy=TotalpriceTommy*(float)Tax;
    PriceTaxTommy= PriceTaxTommy*100;
    PriceTaxTommy=PriceTaxTommy+0.5;
    PriceTaxTommy=(int)PriceTaxTommy;
    PriceTaxTommy=(float)PriceTaxTommy/100;
    TOTALTommy=PriceTaxTommy+(float)TotalpriceTommy;

    //Sallys part
    printf("\nSally's shirt size is"" 'M'");
    printf("\nNumber of shirts Sally is buying: ");
    scanf("%d",&NboughtM);
    TotalpriceSally =NboughtM*(float) Mprice;
    PriceTaxSally=TotalpriceSally*(float)Tax;
    PriceTaxSally= PriceTaxSally*100;
    PriceTaxSally=PriceTaxSally+0.5;
    PriceTaxSally=(int)PriceTaxSally;
    PriceTaxSally=(float)PriceTaxSally/100;
    TOTALSally=PriceTaxSally+(float)TotalpriceSally;

    //Total Calculation
    SuperSubTotal=TotalpriceSally+(float)TotalpriceTommy+TotalpricePatty;
    SuperTax=PriceTaxPatty+(float)PriceTaxTommy+PriceTaxSally;
    SuperTotal=SuperSubTotal+(float)SuperTax;

    //Table
    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total");
    printf("\n-------- ---- ----- --- --------- --------- ---------");
    printf("\nPatty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf",Patty[0], 
    Sprice, NboughtS, TotalpricePatty, PriceTaxPatty, TOTALpatty );
    printf("\nSally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf",Sally[0], 
    Mprice, NboughtM, TotalpriceSally, PriceTaxSally, TOTALSally );
    printf("\nTommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf",Tommy[0], 
    Lprice, NboughtL, TotalpriceTommy, PriceTaxTommy, TOTALTommy );
    printf("\n-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n",SuperSubTotal, SuperTax,SuperTotal);

    //Coins part before taxes
    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n");
    printf("\nSales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n",SuperSubTotal);
    int toonies;
    float leftover;
    toonies=SuperSubTotal/2;
    leftover=SuperSubTotal-((float)toonies*2);
    printf("Toonies  %3d %9.4lf\n",toonies,leftover);
    int loonies;
    loonies=SuperSubTotal-(toonies*2);
    leftover=leftover-(float)loonies;
    printf("Loonies  %3d %9.4lf\n",loonies,leftover);
    int quarters;
    quarters=(float)leftover/0.25;
    leftover=(float)leftover-quarters*0.25;
    printf("Quarters %3d %9.4lf\n",quarters,leftover);
    int dimes;
    dimes=(float)leftover/0.10;
    leftover=(float)leftover-dimes*0.10;
    printf("Dimes    %3d %9.4lf\n",dimes,leftover);
    int nickels=(float)leftover/0.05;
    leftover=(float)leftover-nickels*0.05;
    printf("Nickels  %3d %9.4lf\n",nickels,leftover);
    int pennies= (float)leftover/0.01;
    leftover=(float)leftover-pennies*0.01;
    printf("Pennies  %3d %9.4lf\n",pennies,leftover);
    float AverageCost= (float)SuperSubTotal/(NboughtL+NboughtM+NboughtS);
    printf("\nAverage cost/shirt: $%.4lf", AverageCost);

    //coins part after taxes
    printf("\n\nSales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n",SuperTotal);
    toonies=SuperTotal/2;
    leftover=SuperTotal-((float)toonies*2);
    printf("Toonies  %3d %9.4lf\n",toonies,leftover);
    loonies=SuperTotal-(toonies*2);
    leftover=leftover-(float)loonies;
    printf("Loonies  %3d %9.4lf\n",loonies,leftover);
    quarters=(float)leftover/0.25;
    leftover=(float)leftover-quarters*0.25;
    printf("Quarters %3d %9.4lf\n",quarters,leftover);
    dimes=(float)leftover/0.10;
    leftover=(float)leftover-dimes*0.10;
    printf("Dimes    %3d %9.4lf\n",dimes,leftover);
    nickels=(float)leftover/0.05;
    leftover=(float)leftover-nickels*0.05;
    printf("Nickels  %3d %9.4lf\n",nickels,leftover);
    pennies= (float)leftover/0.01;
    leftover=(float)leftover-pennies*0.01;
    printf("Pennies  %3d %9.4lf\n",pennies,leftover);
    AverageCost= (float)SuperTotal/(NboughtL+NboughtM+NboughtS);
    printf("\nAverage cost/shirt: $%.4lf", AverageCost);
    printf("\n");
 

    return 0;

}
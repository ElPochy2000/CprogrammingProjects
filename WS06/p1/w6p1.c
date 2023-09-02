/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
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
#define MAX_ITEM 10
#include <stdio.h>

int main(void)
{
    double userIncome,userCost,costTotal;
    const int minIncome = 500;
    const int maxIncome = 400000;  
    int userItems, arrayLoop, userPriority;
    char userFinance;
    double userArray[MAX_ITEM][3];


    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");

    // Income Loop
    do{
        printf("\nEnter your monthly NET income: $");
        scanf(" %lf",&userIncome);
        if (userIncome<minIncome) {
            printf ("ERROR: You must have a consistent monthly income of at least $500.00\n");
        } else if (userIncome>maxIncome) {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n");
        };
    } while (userIncome<minIncome||userIncome>maxIncome);

    //Item Amount Loop
    do{
        printf ("\nHow many wish list items do you want to forecast?: ");
        scanf(" %d",&userItems);
        if (userItems<1||userItems>10) {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        };
    } while (userItems<1||userItems>MAX_ITEM);

    //Array Modifying Loop
    for (arrayLoop=0;arrayLoop<userItems;arrayLoop++) {
        //following code modifies items cost
        printf("\nItem-%d Details:",arrayLoop+1);
        do {
            printf("\n   Item cost: $");
            scanf(" %lf", &userCost);
            if (userCost<100) {
                printf("      ERROR: Cost must be at least $100.00");
            } else {
                userArray[arrayLoop][0]=userCost;
                costTotal+=userCost;
            }
        } while (userCost<100);
        //loop to modify the importance
        do{
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf(" %d",&userPriority);
            if (userPriority<1||userPriority>3) {
                printf("      ERROR: Value must be between 1 and 3\n");
            } else {
                userArray[arrayLoop][1]=userPriority;
            }
        } while (userPriority<1||userPriority>3);
        //loop to modify Finance options
        do{
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c",&userFinance);
            if (userFinance!='y'&&userFinance!='n') {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            } else {
                userArray[arrayLoop][2]=userFinance;
            };
        } while (userFinance!='y'&&userFinance!='n');
    };
    //Review Table
    printf("\nItem Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    for (arrayLoop=0;arrayLoop<userItems;arrayLoop++) {
        printf("%3d  %5d    %5c    %11.2lf\n",arrayLoop+1,(int)userArray[arrayLoop][1],(int)userArray[arrayLoop][2],userArray[arrayLoop][0]);
    };
    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n\n", costTotal);
    printf("Best of luck in all your future endeavours!\n");


    return 0;
}
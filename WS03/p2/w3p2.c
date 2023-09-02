/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
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

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

    char coffee1, coffee2, coffee3;
    int bag1,bag2,bag3;
    char cream1,cream2,cream3;

    char userStrength, userCream;
    int userServings;

    //Product information
    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c",&coffee1);
    printf("Bag weight (g): ");
    scanf("%d",&bag1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&cream1);

    //repeats process with coffee 2
    printf("\nCOFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c",&coffee2);
    printf("Bag weight (g): ");
    scanf("%d",&bag2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&cream2);

    //repeats process with coffee 3
    printf("\nCOFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c",&coffee3);
    printf("Bag weight (g): ");
    scanf("%d",&bag3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&cream3);
 
    //table with info
    printf("\n---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",(coffee1=='l'||coffee1=='L'),(coffee1=='m'||coffee1=='M'),(coffee1=='r'||coffee1=='R'), bag1,(double)bag1/GRAMS_IN_LBS,(cream1=='y'||cream1=='Y'));
    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",(coffee2=='l'||coffee2=='L'),(coffee2=='m'||coffee2=='M'),(coffee2=='r'||coffee2=='R'), bag2,(double)bag2/GRAMS_IN_LBS,(cream2=='y'||cream2=='Y'));
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",(coffee3=='l'||coffee3=='L'),(coffee3=='m'||coffee3=='M'),(coffee3=='r'||coffee3=='R'), bag3,(double)bag3/GRAMS_IN_LBS,(cream3=='y'||cream3=='Y'));

    //Get User 1 Preference
    printf("\nEnter how you like your coffee...\n\n");
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c",&userStrength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &userCream);
    printf("Typical number of daily servings: ");
    scanf("%d",&userServings);
    printf("\nThe below table shows how your preferences align to the available products:\n\n");

    //Table of preferences 1 start 
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    //Cassie if you read this Sorry for this Really long code :( i couldnt find another way without a loop
    printf(" 1|       %d         |      %d      |   %d   |\n",((userStrength=='l'&&coffee1=='l')||(userStrength=='L'&&coffee1=='L')||(userStrength=='l'&&coffee1=='L')||(userStrength=='L'&&coffee1=='l')||(userStrength=='m'&&coffee1=='m')||(userStrength=='m'&&coffee1=='M')||(userStrength=='M'&&coffee1=='m')||(userStrength=='M'&&coffee1=='M')||(userStrength=='r'&&coffee1=='r')||(userStrength=='R'&&coffee1=='R')||(userStrength=='r'&&coffee1=='R')||(userStrength=='R'&&coffee1=='r')),((userServings<=4&&bag1==250)||(5<=userServings&&userServings<10&&bag1==500)||(10<=userServings&&bag1==1000)),((userCream=='y'&&cream1=='y')||(userCream=='Y'&&cream1=='Y')||(userCream=='y'&&cream1=='Y')||(userCream=='Y'&&cream1=='y')||(userCream=='n'&&cream1=='n')||(userCream=='N'&&cream1=='N')||(userCream=='n'&&cream1=='N')||(userCream=='N'&&cream1=='n')));
    printf(" 2|       %d         |      %d      |   %d   |\n",((userStrength=='l'&&coffee2=='l')||(userStrength=='L'&&coffee2=='L')||(userStrength=='l'&&coffee2=='L')||(userStrength=='L'&&coffee2=='l')||(userStrength=='m'&&coffee2=='m')||(userStrength=='m'&&coffee2=='M')||(userStrength=='M'&&coffee2=='m')||(userStrength=='M'&&coffee2=='M')||(userStrength=='r'&&coffee2=='r')||(userStrength=='R'&&coffee2=='R')||(userStrength=='r'&&coffee2=='R')||(userStrength=='R'&&coffee2=='r')),((userServings<=4&&bag2==250)||(5<=userServings&&userServings<10&&bag2==500)||(10<=userServings&&bag2==1000)),((userCream=='y'&&cream2=='y')||(userCream=='Y'&&cream2=='Y')||(userCream=='y'&&cream2=='Y')||(userCream=='Y'&&cream2=='y')||(userCream=='n'&&cream2=='n')||(userCream=='N'&&cream2=='N')||(userCream=='n'&&cream2=='N')||(userCream=='N'&&cream2=='n')));
    printf(" 3|       %d         |      %d      |   %d   |\n",((userStrength=='l'&&coffee3=='l')||(userStrength=='L'&&coffee3=='L')||(userStrength=='l'&&coffee3=='L')||(userStrength=='L'&&coffee3=='l')||(userStrength=='m'&&coffee3=='m')||(userStrength=='m'&&coffee3=='M')||(userStrength=='M'&&coffee3=='m')||(userStrength=='M'&&coffee3=='M')||(userStrength=='r'&&coffee3=='r')||(userStrength=='R'&&coffee3=='R')||(userStrength=='r'&&coffee3=='R')||(userStrength=='R'&&coffee3=='r')),((userServings<=4&&bag3==250)||(5<=userServings&&userServings<10&&bag3==500)||(10<=userServings&&bag3==1000)),((userCream=='y'&&cream3=='y')||(userCream=='Y'&&cream3=='Y')||(userCream=='y'&&cream3=='Y')||(userCream=='Y'&&cream3=='y')||(userCream=='n'&&cream3=='n')||(userCream=='N'&&cream3=='N')||(userCream=='n'&&cream3=='N')||(userCream=='N'&&cream3=='n')));

    //Table number 2
    printf("\nEnter how you like your coffee...\n\n");
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c",&userStrength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &userCream);
    printf("Typical number of daily servings: ");
    scanf("%d",&userServings);
    printf("\nThe below table shows how your preferences align to the available products:\n\n");
        printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n",((userStrength=='l'&&coffee1=='l')||(userStrength=='L'&&coffee1=='L')||(userStrength=='l'&&coffee1=='L')||(userStrength=='L'&&coffee1=='l')||(userStrength=='m'&&coffee1=='m')||(userStrength=='m'&&coffee1=='M')||(userStrength=='M'&&coffee1=='m')||(userStrength=='M'&&coffee1=='M')||(userStrength=='r'&&coffee1=='r')||(userStrength=='R'&&coffee1=='R')||(userStrength=='r'&&coffee1=='R')||(userStrength=='R'&&coffee1=='r')),((userServings<=4&&bag1==250)||(5<=userServings&&userServings<10&&bag1==500)||(10<=userServings&&bag1==1000)),((userCream=='y'&&cream1=='y')||(userCream=='Y'&&cream1=='Y')||(userCream=='y'&&cream1=='Y')||(userCream=='Y'&&cream1=='y')||(userCream=='n'&&cream1=='n')||(userCream=='N'&&cream1=='N')||(userCream=='n'&&cream1=='N')||(userCream=='N'&&cream1=='n')));
    printf(" 2|       %d         |      %d      |   %d   |\n",((userStrength=='l'&&coffee2=='l')||(userStrength=='L'&&coffee2=='L')||(userStrength=='l'&&coffee2=='L')||(userStrength=='L'&&coffee2=='l')||(userStrength=='m'&&coffee2=='m')||(userStrength=='m'&&coffee2=='M')||(userStrength=='M'&&coffee2=='m')||(userStrength=='M'&&coffee2=='M')||(userStrength=='r'&&coffee2=='r')||(userStrength=='R'&&coffee2=='R')||(userStrength=='r'&&coffee2=='R')||(userStrength=='R'&&coffee2=='r')),((userServings<=4&&bag2==250)||(5<=userServings&&userServings<10&&bag2==500)||(10<=userServings&&bag2==1000)),((userCream=='y'&&cream2=='y')||(userCream=='Y'&&cream2=='Y')||(userCream=='y'&&cream2=='Y')||(userCream=='Y'&&cream2=='y')||(userCream=='n'&&cream2=='n')||(userCream=='N'&&cream2=='N')||(userCream=='n'&&cream2=='N')||(userCream=='N'&&cream2=='n')));
    printf(" 3|       %d         |      %d      |   %d   |\n",((userStrength=='l'&&coffee3=='l')||(userStrength=='L'&&coffee3=='L')||(userStrength=='l'&&coffee3=='L')||(userStrength=='L'&&coffee3=='l')||(userStrength=='m'&&coffee3=='m')||(userStrength=='m'&&coffee3=='M')||(userStrength=='M'&&coffee3=='m')||(userStrength=='M'&&coffee3=='M')||(userStrength=='r'&&coffee3=='r')||(userStrength=='R'&&coffee3=='R')||(userStrength=='r'&&coffee3=='R')||(userStrength=='R'&&coffee3=='r')),((userServings<=4&&bag3==250)||(5<=userServings&&userServings<10&&bag3==500)||(10<=userServings&&bag3==1000)),((userCream=='y'&&cream3=='y')||(userCream=='Y'&&cream3=='Y')||(userCream=='y'&&cream3=='Y')||(userCream=='Y'&&cream3=='y')||(userCream=='n'&&cream3=='n')||(userCream=='N'&&cream3=='N')||(userCream=='n'&&cream3=='N')||(userCream=='N'&&cream3=='n')));

    //Goodbye
    printf("\nHope you found a product that suits your likes!\n");

    return 0;
}


/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",

As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",

*/
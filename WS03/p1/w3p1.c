/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  : Thiago Flores
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    //Variables
    const double testValue = 330.99;
    double product1=111.49, product2=222.99, product3=334.49;
    int id1=111,id2=222,id3=111;
    char *tax1="Y", *tax2="N", *tax3="N";
    double averagePrice=(product1+product2+product3)/(double)3;

    //Product Information
    printf("Product Information\n");
    printf("===================\n");
    printf("Product-1 (ID:%d)\n",id1);
    printf("  Taxed: %s\n",tax1);
    printf("  Price: $%.4lf\n\n",product1);

   
    printf("Product-2 (ID:%d)\n",id2);
    printf("  Taxed: %s\n",tax2);
    printf("  Price: $%.4lf\n\n",product2);

    printf("Product-3 (ID:%d)\n",id3);
    printf("  Taxed: %s\n",tax3);
    printf("  Price: $%.4lf\n\n",product3);

    printf("The average of all prices is: $%.4lf\n\n",averagePrice);
    //Theory printf

    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n\n");



    //Data Analysis
    printf("Some Data Analysis...\n");
    printf("=====================\n");
    printf("1. Is product 1 taxable? -> ");
    if (tax1[0] == 'Y'){
        printf("1\n\n");
    } else {
        printf("0\n\n");
    };
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> ");
    if ((tax2[0] == 'N')&&(tax3[0] == 'N')){
        printf("1\n\n");
    } else {
        printf("0\n\n");
    };
    printf("3. Is product 3 less than testValue ($%.2lf)? -> ",testValue);
    if (product3<testValue){
        printf("1\n\n");
    } else {
        printf("0\n\n");
    };
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> ");
    if (product3>product1+product2){
        printf("1\n\n");
    } else {
        printf("0\n\n");
    };
    printf("5. Is the price of product 1 equal to or more than the price difference\n   of product 3 LESS product 2? ->  ");
    if (product1>=product3-product2){
        double difference=(double)product3-product2;
        printf("1 (price difference: $%.2lf)\n",difference);
    } else {
        double difference=(double)product3-product2;
        printf("0 (price difference: $%.2lf)\n",difference);
    };



    return 0;
}
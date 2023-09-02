/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
Full Name  : Thiago Flores  
Student ID#: 
Email      : tflores4@myseneca.ca   
Section    : NJJ

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MIN_YEAR 2012
#define MAX_YEAR 2022

int main(void)
{
    const int JAN=1, DEC=12;
    int userMonth, userYear;
    char *result;

    //Code
    printf("General Well-being Log\n");
    printf("======================\n");
    do {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%4d %2d",&userYear,&userMonth);
        if (userYear<MIN_YEAR||userYear>MAX_YEAR) {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        };
        switch (userMonth){
            case 0:
                printf("   ERROR: Jan.(1) - Dec.(12)\n");
                break;
            case 1:
                result="JAN";
                break;
            case 2:
                result="FEB";
                break;
            case 3:
                result="MAR";
                break;
            case 4:
                result="APR";
                break;
            case 5:
                result="MAY";
                break;
            case 6:
                result="JUN";
                break;
            case 7:
                result="JUL";
                break;
            case 8:
                result="AUG";
                break;
            case 9:
                result="SEP";
                break;
            case 10:
                result="OCT";
                break;
            case 11:
                result="NOV";
                break;
            case 12:
                result="DEC";
                break;
            default:
                printf("   ERROR: Jan.(1) - Dec.(12)\n");
                    
            };
    } while (userYear<MIN_YEAR||userYear>MAX_YEAR||userMonth<JAN||userMonth>DEC);

    printf("\n*** Log date set! ***\n");
    printf("\nLog starting date: %d-%s-01\n",userYear,result);


    

    return 0;
}
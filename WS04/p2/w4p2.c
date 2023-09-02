/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : 
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int apples, oranges, pears, tomatoes, cabbages, userChoice;
    int userLoop=1;

    //Master Loop

    do {

    //Starts Request of Needs
        printf("Grocery Shopping\n");
        printf("================");


        do {
            printf("\nHow many APPLES do you need? : ");
            scanf(" %d",&apples);
            if(apples<0){
               printf ("ERROR: Value must be 0 or more.");
            }
        } while (apples<0);


        do {
            printf("\nHow many ORANGES do you need? : ");
            scanf(" %d",&oranges);
            if(oranges<0){
               printf ("ERROR: Value must be 0 or more.");
            }
        } while (oranges<0);


        do {
            printf("\nHow many PEARS do you need? : ");
            scanf(" %d",&pears);
            if(pears<0){
               printf ("ERROR: Value must be 0 or more.");
            }
        } while (pears<0);


        do {
            printf("\nHow many TOMATOES do you need? : ");
            scanf(" %d",&tomatoes);
            if(tomatoes<0){
               printf ("ERROR: Value must be 0 or more.");
            }
        } while (tomatoes<0);


        do {
            printf("\nHow many CABBAGES do you need? : ");
            scanf(" %d",&cabbages);
            if(cabbages<0){
               printf ("ERROR: Value must be 0 or more.");
            }
        } while (cabbages<0);

    //Product Comparison
        printf("\n--------------------------");
        printf("\nTime to pick the products!");
        printf("\n--------------------------\n");


        while (apples>0) {
            printf("\nPick some APPLES... how many did you pick? : ");
            scanf(" %d",&userChoice);
            if (((apples-userChoice)>=0)&&(userChoice<=apples)&&(userChoice>0)) {
                apples-=userChoice;
                if (apples>0){
                    printf("Looks like we still need some APPLES...");
                } else if (apples==0) {
                printf("Great, that's the apples done!\n");
                }
            } else if (userChoice<=0) {
                printf("ERROR: You must pick at least 1!");
            } else if (userChoice>apples) {
                printf("You picked too many... only %d more APPLE(S) are needed.",apples);
            }

        } while (oranges>0) {
            printf("\nPick some ORANGES... how many did you pick? : ");
            scanf(" %d",&userChoice);
            if (((oranges-userChoice)>=0)&&(userChoice<=oranges)&&(userChoice>0)) {
                oranges-=userChoice;
                if (oranges>0){
                    printf("Looks like we still need some ORANGES...");
                } else if (oranges==0) {
                    printf("Great, that's the oranges done!\n");
                }
            } else if (userChoice<=0) {
                printf("ERROR: You must pick at least 1!");
            } else if (userChoice>oranges) {
                printf("You picked too many... only %d more ORANGE(S) are needed.",oranges);
            };


        } while (pears>0) {
            printf("\nPick some PEARS... how many did you pick? : ");
            scanf(" %d",&userChoice);
            if (((pears-userChoice)>=0)&&(userChoice<=pears)&&(userChoice>0)) {
                pears-=userChoice;
                if (pears>0){
                    printf("Looks like we still need some PEARS...");
                } else if (pears==0) {
                    printf("Great, that's the pears done!\n");
                }
            } else if (userChoice<=0) {
                printf("ERROR: You must pick at least 1!");
            } else if (userChoice>pears) {
                printf("You picked too many... only %d more PEAR(S) are needed.",pears);
            };


        } while (tomatoes>0) {
            printf("\nPick some TOMATOES... how many did you pick? : ");
            scanf(" %d",&userChoice);
            if (((tomatoes-userChoice)>=0)&&(userChoice<=tomatoes)&&(userChoice>0)) {
                tomatoes-=userChoice;
                if (tomatoes>0){
                    printf("Looks like we still need some TOMATOES...");
                } else if (tomatoes==0) {
                    printf("Great, that's the tomatoes done!\n");
                }
            } else if (userChoice<=0) {
                printf("ERROR: You must pick at least 1!");
            } else if (userChoice>tomatoes) {
                printf("You picked too many... only %d more TOMATO(ES) are needed.",tomatoes);
            };


        } while (cabbages>0) {
            printf("\nPick some CABBAGES... how many did you pick? : ");
            scanf(" %d",&userChoice);
            if (((cabbages-userChoice)>=0)&&(userChoice<=cabbages)&&(userChoice>0)) {
                cabbages-=userChoice;
                if (cabbages>0){
                    printf("Looks like we still need some CABBAGES...");
                } else if (cabbages==0) {
                    printf("Great, that's the cabbages done!\n");
                }
            } else if (userChoice<=0) {
                printf("ERROR: You must pick at least 1!");
            } else if (userChoice>cabbages) {
                printf("You picked too many... only %d more CABBAGE(S) are needed.",cabbages);
            };
        } 

    printf("\nAll the items are picked!\n");
    printf("\nDo another shopping? (0=NO): ");
    scanf("%d",&userLoop);
    printf("\n");

    // Ends MasterLoop
    } while (userLoop!=0);
    printf("Your tasks are done for today - enjoy your free time!\n");
    return 0;
}
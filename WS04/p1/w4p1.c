/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
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
    char userInput;
    int userNumber;
    int i;

    //Beggining loop
    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+");

    //Code loop
    do{
        //When something doesnt go by the rules

        printf("\n\nD = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d",&userInput,&userNumber);
            if((userInput!='D')&&(userInput!='W')&&(userInput!='F')&&(userInput!='Q')){
                printf("ERROR: Invalid entered value(s)!");          
          } else if (((userInput=='D')||(userInput=='W')||(userInput=='F'))&&(((userNumber>=0)&&(userNumber<3))||(userNumber>20))){
                printf("ERROR: The number of iterations must be between 3-20 inclusive!");
          } else if (userInput=='Q'&&userNumber!=0){
                printf("ERROR: To quit, the number of iterations should be 0!");

        // When everthing follows the rules F D and W

          } else if ((userInput=='D')&&((userNumber>=3&&userNumber<=20))){
                printf("DO-WHILE: ");
                do {
                    printf("%c",userInput);
                    userNumber--;
                }while (userNumber>0);
          } else if ((userInput=='W')&&(userNumber>=3&&userNumber<=20)) {
                printf("WHILE   : ");
                while (userNumber>0) {
                    printf("%c",userInput);
                    userNumber--;
                }
          } else if (userInput=='F'&&((userNumber>=3&&userNumber<=20))) {
                printf("FOR     : ");
                for (i=0;i<userNumber;i++) {
                    printf("%c",userInput);
                };
          };

        } while (userInput!='Q' || userNumber!=0);

    //End of the loop :)
    printf ("\n+--------------------+");
    printf ("\nLoop application ENDED\n");
    printf ("+--------------------+\n");
    return 0;
}
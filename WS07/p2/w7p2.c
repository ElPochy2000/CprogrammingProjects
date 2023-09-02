/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P2)
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
#define ARRAY_MAX_POSITION 70   // I chose this as the max position as it's the limit set by the exercise

#include <stdio.h>

int main(void)
{
    int itineration;
    struct playerConfiguration{
        char playerSymbol;
        int lives;
    };
    struct gameConfiguration{
        int pathLength,moves;
        int bombPlacement[ARRAY_MAX_POSITION];
        int treasurePlacement[ARRAY_MAX_POSITION];
    };
    struct playerConfiguration PlayerInfo;
    struct gameConfiguration GameInfo; 


    printf("================================\n");
    printf("         Treasure Hunt!\n");
    printf("================================\n\n");

    printf("PLAYER Configuration\n");
    printf("--------------------\n");
    printf("Enter a single character to represent the player: ");
    scanf (" %c", &PlayerInfo.playerSymbol);

    do {
        printf("Set the number of lives: ");
        scanf(" %d",&PlayerInfo.lives);
        if (PlayerInfo.lives<1||PlayerInfo.lives>10) {
            printf("     Must be between 1 and 10!\n");
        }
    } while(PlayerInfo.lives<1||PlayerInfo.lives>10);
    printf("Player configuration set-up is complete\n\n");
    printf("GAME Configuration\n");
    printf("------------------\n");
    do {
        printf("Set the path length (a multiple of 5 between 10-70): ");
        scanf(" %d",&GameInfo.pathLength);
        if (GameInfo.pathLength<10||GameInfo.pathLength%5!=0||GameInfo.pathLength>70) {
            printf("     Must be a multiple of 5 and between 10-70!!!\n");
        }
    } while (GameInfo.pathLength<10||GameInfo.pathLength%5!=0||GameInfo.pathLength>70);
    do {
        printf("Set the limit for number of moves allowed: ");
        scanf(" %d",&GameInfo.moves);
        if (GameInfo.moves<3||GameInfo.moves>15){
            printf("    Value must be between 3 and 15\n");
        };
    } while (GameInfo.moves<3||GameInfo.moves>15);


    //Begins Bomb and Treasure Placement


    printf ("\nBOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of 5 where a value\nof 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n(Example: 1 0 0 1 1) NOTE: there are %d to set!\n",GameInfo.pathLength);
    for (itineration=0;itineration<GameInfo.pathLength;itineration++){
        printf ("   Positions [%2d-%2d]: ",itineration+1,itineration+5);
        scanf("%d %d %d %d %d",&GameInfo.bombPlacement[itineration],&GameInfo.bombPlacement[itineration+1],&GameInfo.bombPlacement[itineration+2],&GameInfo.bombPlacement[itineration+3],&GameInfo.bombPlacement[itineration+4]);
        itineration+=4;
    };
    printf("BOMB placement set\n\n");
    printf("TREASURE Placement\n");
    printf("------------------\n");
    printf("Enter the treasure placements in sets of 5 where a value\nof 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n(Example: 1 0 0 1 1) NOTE: there are %d to set!\n",GameInfo.pathLength);
    for (itineration=0;itineration<GameInfo.pathLength;itineration++){
        printf ("   Positions [%2d-%2d]: ",itineration+1,itineration+5);
        scanf("%d %d %d %d %d",&GameInfo.treasurePlacement[itineration],&GameInfo.treasurePlacement[itineration+1],&GameInfo.treasurePlacement[itineration+2],&GameInfo.treasurePlacement[itineration+3],&GameInfo.treasurePlacement[itineration+4]);
        itineration+=4;
    };

    //REVIEW


    printf("TREASURE placement set\n\n");
    printf("GAME configuration set-up is complete...\n\n");
    printf("------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");
    printf("Player:\n");
    printf("   Symbol     : %c\n",PlayerInfo.playerSymbol);
    printf("   Lives      : %d\n",PlayerInfo.lives);
    printf("   Treasure   : [ready for gameplay]\n");
    printf("   History    : [ready for gameplay]\n\n");
    printf("Game:\n");
    printf("   Path Length: %d\n",GameInfo.pathLength);
    printf("   Bombs      : ");
    for (itineration=0;itineration<GameInfo.pathLength;itineration++) {
    printf("%d",GameInfo.bombPlacement[itineration]);
    };
    printf("\n   Treasure   : ");
    for (itineration=0;itineration<GameInfo.pathLength;itineration++) {
    printf("%d",GameInfo.treasurePlacement[itineration]);
    };
    printf("\n\n====================================");
    printf("\n~ Get ready to play TREASURE HUNT! ~");
    printf("\n====================================\n");

    //Part 2 Beggining game
    //Defining new variables 

    int moveCounter[ARRAY_MAX_POSITION];
    int userChoice;
    int treasureCount=0;

    //Setting new variables
    for (itineration=0;itineration<GameInfo.pathLength;itineration++){
        moveCounter [itineration] = '-';
    };

    // Game Begins first we set up a loop that will continue until either the lives finish or the moves finish
    while (PlayerInfo.lives>0||GameInfo.moves<1) {

        //Here we set first the 2 tables for the move checking and the treasure, lives and moves
        for (itineration=0;itineration<userChoice;itineration++){
            if (userChoice==(itineration+1)) {
                printf("  %c",PlayerInfo.playerSymbol);
            } else {
                printf(" ");
            }
        };
        printf("\n  ");
        for (itineration=0;itineration<GameInfo.pathLength;itineration++){
            printf("%c",moveCounter[itineration]);
        };
        printf("\n  ");
        for (itineration=0;itineration<GameInfo.pathLength;itineration++){
            if ((itineration+1)%10==0){
            printf("%d",(itineration+1)/10);
            } else {
                printf("|");
            };
        };
            printf("\n  ");
        for (itineration=0;itineration<GameInfo.pathLength;itineration++){
            printf("%d",(itineration+1)%10);
        };
        printf ("\n+---------------------------------------------------+");
        printf("\n  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d",PlayerInfo.lives,treasureCount,GameInfo.moves);
        printf ("\n+---------------------------------------------------+");

        //After Showing in what status does the player findhimself on, we ask for an input and react accordingly
        printf("\nNext Move [1-20]: ");
        scanf("%d",&userChoice);
        while (userChoice<1||userChoice>20) {
            printf("  Out of Range!!!");
            printf("\nNext Move [1-20]: ");
            scanf("%d",&userChoice);
        }if (moveCounter[userChoice-1]!='-') {
            printf("\n===============> Dope! You've been here before!");
        } else if ((GameInfo.bombPlacement[userChoice-1]==1&&GameInfo.treasurePlacement[userChoice-1])==1) {
            printf("\n===============> [&] !!! BOOOOOM !!! [&]");
            printf("\n===============> [&] $$$ Life Insurance Payout!!! [&]");
            PlayerInfo.lives--;
            treasureCount++;
            GameInfo.moves--;
            moveCounter [userChoice-1]='&';
        } else if (GameInfo.bombPlacement[userChoice-1]==0&&GameInfo.treasurePlacement[userChoice-1]==0) {
            printf("\n===============> [.] ...Nothing found here... [.]");
            GameInfo.moves--;
            moveCounter [userChoice-1]='.';
        } else if (GameInfo.bombPlacement[userChoice-1]==1&&GameInfo.treasurePlacement[userChoice-1]==0) {
            printf("\n===============> [!] !!! BOOOOOM !!! [!]");
            PlayerInfo.lives--;
            GameInfo.moves--;
            moveCounter [userChoice-1]='!';
        } else if (GameInfo.bombPlacement[userChoice-1]==0&&GameInfo.treasurePlacement[userChoice-1]==1) {
            printf("\n===============> [$] $$$ Found Treasure! $$$ [$]");
            treasureCount++;
            GameInfo.moves--;
            moveCounter [userChoice-1]='$';
        };
        printf("\n\n");
    };

    //Lives are over. Last Review and Finish of the game

    
    if (PlayerInfo.lives==0) {
        printf("No more LIVES remaining!\n\n");
    } else {
        printf("No more MOVES remaining!\n\n");
    }
    for (itineration=0;itineration<userChoice;itineration++){
        if (userChoice==(itineration+1)) {
            printf("  %c",PlayerInfo.playerSymbol);
        } else {
            printf(" ");
        }
    };
    printf("\n  ");
    for (itineration=0;itineration<GameInfo.pathLength;itineration++){
        printf("%c",moveCounter[itineration]);
    };
    printf("\n  ");
    for (itineration=0;itineration<GameInfo.pathLength;itineration++){
        if ((itineration+1)%10==0){
            printf("%d",(itineration+1)/10);
        } else {
            printf("|");
        }
    }
    printf("\n  ");
    for (itineration=0;itineration<GameInfo.pathLength;itineration++){
        printf("%d",(itineration+1)%10);
    };
    printf ("\n+---------------------------------------------------+");
    printf("\n  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d",PlayerInfo.lives,treasureCount,GameInfo.moves);
    printf ("\n+---------------------------------------------------+\n");
    printf("\n##################");
    printf("\n#   Game over!   #");
    printf("\n##################");
    printf("\n\nYou should play again and try to beat your score!\n");
    return 0;
    };

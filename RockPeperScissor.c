#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int getuserchoise();
int getcomputerchoise();
void winner(int userchoise,int computerchoise);
int main(){
    srand(time(NULL));
    printf("*** ROCK PAPER SCISSOR ***\n");
    int userchoise =getuserchoise();
    int computerchoice= getcomputerchoise();
    switch(userchoise){
        case 1:
            printf(" you choose ROCK\n");
            break;
        case 2:
            printf(" you choose PAPER\n");
            break;
        case 3:
            printf("you choose SCISSOR\n");
            break;
    }
    switch(computerchoice){
        case 1:
            printf("computer choose ROCK\n");
            break;
        case 2:
            printf("computer choose PAPER\n");
            break;
        case 3:
            printf("computer choose SCISSOR\n");
            break;
    }
    winner( userchoise, computerchoice);
}
int getuserchoise(){
    int choise=0;
    do{
        printf("enter 1:ROCK , 2:PAPER , 3:SCISSOR :");
        scanf("%d", &choise);
    }while(choise <1 || choise>3);
}
int getcomputerchoise(){
    return (rand() % 3)+1 ;// random num between 1 and 3
}
void winner(int userchoise,int computerchoise){
    if(userchoise == computerchoise ){
        printf("This is a TIE !!");
    }
    else if((userchoise == 1 && computerchoise == 3)||
            (userchoise == 2 && computerchoise == 1)|| 
            (userchoise == 3 && computerchoise == 2)){
                printf("YOU WIN !!");
    }
    else{
        printf("YOU LOSE !!");
    }
}
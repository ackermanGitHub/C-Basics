#include<stdio.h>
#define LENGTH 10

const int COST = 100;
const float BILL = 49.99;
const char NEWLINE = '\n';

enum DECK //Declares an enumeration data type called DECK
{
    club = 20,
    diamond = 5, 
    hearts = 10, 
    spades = 15, 
} card = club; //Declares a variable of type DECK and assigns it club value

int main(void){
    enum DECK card1 = hearts; //Declares a variable of type DECK and assigns it hearts value
    printf("Card value is: %d", card);
    printf("\nCard1 value is: %d", card1+1);
    printf("\nSize of card is: %d", sizeof(card));
    printf("%cCOST: %d%cBILL: %f%cLENGHT: %d", NEWLINE, COST, NEWLINE, BILL, NEWLINE, LENGTH);
    return 0;
}
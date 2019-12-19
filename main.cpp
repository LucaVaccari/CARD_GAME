#include <iostream>
#include "gabry.h"
#include "Deck.h"
#include "CardLogic.h"
#include "BJ-Player.h"

using namespace std;

int main()
{
    srand(time(NULL));
    system( "Title card game 3" );

    ConsoleMessage(msgType_debug, msgSpeed_auto, "initializing deck");
    Deck BJDeck( deckType_BlackJack );

    ConsoleMessage(msgType_debug, msgSpeed_auto, "initializing player");
    BJ_Player BJPlayer;

    ConsoleMessage(msgType_debug, msgSpeed_auto, "shuffling deck");
    BJDeck.Shuffle();

    ConsoleMessage(msgType_debug, msgSpeed_default, "initializing global variables");
    int wins = 0, loses = 0;
    char userInput;

    ConsoleMessage(msgType_debug, msgSpeed_auto, "initializing desk");
    BJ_Player desk;

    desk.PickCard( BJDeck.Draw() );
    desk.PickCard( BJDeck.Draw() );

    BJPlayer.PickCard( BJDeck.Draw() );
    BJPlayer.PickCard( BJDeck.Draw() );

    clearConsole();

    desk.PrintHand();
    indent( "Desk's score is: " ); cout << desk.GetScore();

    indent();

    do{
        BJPlayer.PrintHand();
        indent("Your score is: " ); cout << BJPlayer.GetScore();
        indent( "Draw another card? (s/n)" );
        userInput=_getch();
        if( userInput == 's' ){
            BJPlayer.PickCard( BJDeck.Draw() );
            indent();
        }
    } while ((userInput == 's')&&( BJPlayer.GetScore() < 21 ));

    clearConsole();
    indent();

    if( BJPlayer.GetScore() == 21 ) indent( "How lucky, your score is 21!" );
    else if( BJPlayer.GetScore() > 21 ) indent( "Your score is over 21" );
    else indent( "Your don't want more cards" );

    indent();

    BJPlayer.PrintHand();
    indent( "Your score is: " ); cout << BJPlayer.GetScore();

    indent();

    if( BJPlayer.GetScore() > 21 ){

        clearConsole();
        indent();
        indent( "Game ended. You lost." );
        indent( "Your score went above 21.\n" );

        BJPlayer.PrintHand();
        indent( "Your score is: " ); cout << BJPlayer.GetScore();

        indent();

        desk.PrintHand();
        indent( "Desk's score is: " ); cout << desk.GetScore();

    }
    else{

        clearConsole();

        indent(); indent( "Turn of the desk.\n" );

        while ( desk.GetScore() < 16 ){
            desk.PrintHand();
            indent( "Desk's score is: " ); cout << desk.GetScore();
            desk.PickCard( BJDeck.Draw() );
            indent();

        }

        indent();
        desk.PrintHand();
        indent( "Desk's score is: " ); cout << desk.GetScore();

    }

    clearConsole();
    indent();
    ConsoleMessage(msgType_system, msgSpeed_fast, "Game over.");
    if( BJPlayer.GetScore() < desk.GetScore() ) ConsoleMessage( msgType_system, msgSpeed_fast, "YOU WON!" );
    else if( BJPlayer.GetScore() == desk.GetScore() ) ConsoleMessage( msgType_system, msgSpeed_fast, "Game draw" );
    else ConsoleMessage( msgType_system, msgSpeed_fast, "You lost" );

    indent();
    BJPlayer.PrintHand();
    indent( "Your score is: " ); cout << BJPlayer.GetScore();
    indent();
    desk.PrintHand();
    indent( "Desk's score is: " ); cout << desk.GetScore();

    return 0;
}

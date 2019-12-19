#ifndef DECK_H
#define DECK_H

#include <iostream>
#include "gabry.h"
using std::cout;

#include "CardLogic.h"

enum deckType{ deckType_BlackJack };

class Deck
{
    public:
        Deck( deckType newType );
        ~Deck();

        int GetIndex() { return m_Index; }
        int GetPopulation() { return m_Population; }
        void SetPopulation(int val) { m_Population = val; }

        /**< The method put in random order the element of the cards. */
        void Shuffle();

        /**< The method print to screen all the cards. */
        void Print();

        /**< The method return a card form the deck (emulating draw phase) */
        Card Draw();

        /**< The method verify the index */
        bool CheckIndex();

    protected:

    private:
        int m_Index=0;
        int m_Population = 54;
        Card m_Cards[54];
        Deck(); //locked constructor

};

#endif // DECK_H

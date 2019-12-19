#ifndef PLAYER_H
#define PLAYER_H

#include "CardLogic.h"
#include "gabry.h"
#include <iostream>

using std::cout;


class BJ_Player
{
    public:
        /** Default constructor */
        BJ_Player();
        /** Default destructor */
        ~BJ_Player();

        /** Access m_Index
         * \return The current value of m_Index
         */
        int GetIndex() { return m_Index; }

        /** Access to m_Score
         * \return The current value of m_Score
         */
        int GetScore() { return m_Score; }


        /**< Print to screen the cards in hand */
        void PrintHand();

        /**< Pick a card and keep it */
        void PickCard( Card newCard );

        /**< Update the score based on card value */
        void UpdateScore();

        /**< Drop all cards */
        void DropCards() { m_Index = 0; }

    protected:

    private:
        int m_Index = 0; //!< Member variable "m_Index"
        Card m_Hand[ 10 ]; //!< Member variable "m_Hand[]"
        int m_Score = 0; //!< Member variable "m_Score"
        bool m_Ace = false;
};

#endif // PLAYER_H

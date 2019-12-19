#ifndef CARDLOGIC_H
#define CARDLOGIC_H

#include <iostream>
using std::cout;

#define FOLD false
#define UNFOLD true

#define LINE    "\n"
#define SPACE   " "

enum Seed{Hearts = 3, Diamonds, Clubs, Spades};

class Card{
    public:
        /** Default constructor */
        Card();

        /** Parametrize constructor */
        Card(Seed newSeed, int newValue, bool newVisibility);

        /** Default destructor */
        ~Card();

        /** Copy constructor
         *  \param other Object to copy from
         */
        Card(const Card& other);

        /** Operator to copy the class
         * \param other Object to copy from
         */
        void operator = (const Card other);

        /** Access m_Value
         * \return The current value of m_Value
         */
        int GetValue() const { return m_Value; }

        /** Set m_Value
         * \param val New value to set
         */
        void SetValue(int val) { m_Value = val; }

        /** Access m_Seed
         * \return The current value of m_Seed
         */
        Seed GetSeed() const { return m_Seed; }

        /** Set m_Seed
         * \param val New value to set
         */
        void SetSeed(Seed val) { m_Seed = val; }

        /** Access m_Visibility
         * \return The current value of m_Visibility
         */
        bool GetVisibility() const { return m_Visibility; }
        /** Set m_Visibility
         * \param val New value to set
         */
        void SetVisibility(bool val) { m_Visibility = val; }
        /** set m_Visibility to true */
        void SetFold() { m_Visibility = FOLD; }
        /** set m_Visibility to false */
        void SetUnfold() { m_Visibility = UNFOLD; }

        /** Set new values to the class
         * \param Seed, Value and Visibility
         */
         void Set(Seed newSeed, int newValue, bool newVisibility);


        void Print();

        /** check the card value is in range */
        void Check();


    protected:

    private:
        int m_Value; //!< Member variable "m_Value"
        Seed m_Seed; //!< Member variable "m_Seed"
        bool m_Visibility; //!< Member variable "m_Visibility"
};

#endif // CARD_H

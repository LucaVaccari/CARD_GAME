#ifndef CARD_H
#define CARD_H

#include <iostream>
using std::cout;

class Card
{
    public:
        /** Default constructor */
        Card();

        /** Parametrize constructor */
        Card(int newSeed, int newValue);

        /** Default destructor */
        virtual ~Card();

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
        int GetValue() { return m_Value; }

        /** Set m_Value
         * \param val New value to set
         */
        void SetValue(int val) { m_Value = val; }

        /** Access m_Seed
         * \return The current value of m_Seed
         */
        int GetSeed() { return m_Seed; }

        /** Set m_Seed
         * \param val New value to set
         */
        void SetSeed(int val) { m_Seed = val; }

        /** Access m_Visible
         * \return The current value of m_Visible
         */
        bool GetVisible() { return m_Visible; }
        /** set m_Visible to true */
        void SetVisible() { m_Visible = true; }
        /** set m_Visible to false */
        void SetNotVisible() { m_Visible = false; }

        void Print() {
            cout << m_Seed << m_Value;
        }

    protected:

    private:
        int m_Value; //!< Member variable "m_Value"
        int m_Seed; //!< Member variable "m_Seed"
        bool m_Visible; //!< Member variable "m_Visible"
};

#endif // CARD_H

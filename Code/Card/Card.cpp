#include "Card.h"

Card::Card()
{
    Card::SetSeed( 0 );
    Card::SetValue( 0 );
}

Card::Card(int newSeed, int newValue)
{
    Card::SetSeed( newSeed );
    Card::SetValue( newValue );
}

Card::~Card()
{
    //dtor
}

Card::Card(const Card& other)
{
    //copy ctor
    Card::SetSeed( other.GetSeed() );
    Card::SetValue( other.GetValue() );
}

void Card::operator = (const Card other){
    Card::SetSeed( other.GetSeed() );
    Card::SetValue( other.GetValue() );
}

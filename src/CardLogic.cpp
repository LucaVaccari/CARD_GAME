#include "CardLogic.h"

enum pcType{ pcMobile, pcScuola, pcCasa};
enum lenguage{ IT, EN };

const pcType RunningPc = pcScuola;
const lenguage programmLenguage = EN;


Card::Card(){
    Card::SetSeed( Hearts );
    Card::SetValue( 1 );
    Card::SetFold();
}

Card::Card(Seed newSeed, int newValue, bool newVisibility){
    Card::SetSeed( newSeed );
    Card::SetValue( newValue );
    Card::SetVisibility( newVisibility );
}

Card::~Card(){
    //dtor
}

Card::Card(const Card& other){
    //copy ctor
    Card::SetSeed( other.GetSeed() );
    Card::SetValue( other.GetValue() );
    Card::SetVisibility( other.GetVisibility() );
}

void Card::operator = (const Card other){
    Card::SetSeed( other.GetSeed() );
    Card::SetValue( other.GetValue() );
    Card::SetVisibility( other.GetVisibility() );
}

void Card::Check(){
    Card::SetSeed( (Seed) ( ( ( Card::GetSeed() - 3 ) % 4 ) + 3 ) );
    Card::SetValue( Card::GetValue() % 15 );
    if( Card::GetValue() == 'j' ){
        if( ( Card::GetSeed() == Diamonds ) || ( Card::GetSeed() == Spades ) ){
            Card::SetSeed( (Seed) ( Card::GetSeed() - 1 ) );
        }
    }
}

void Card::Print(){

    Card::Check();

    switch( programmLenguage ){
        case IT: { //italiano
            if( Card::GetVisibility() == UNFOLD ) cout << "S[";
            else if( Card::GetVisibility() == FOLD ) cout << "C<";
            else cout << "xIT-x";
        } break;
        case EN: default: { //english
            if( Card::GetVisibility() == UNFOLD ) cout << "U[";
            else if( Card::GetVisibility() == FOLD ) cout << "F<";
            else { cout << "xEN-x"; }
        } break;
    }
    switch( RunningPc ){
        case pcScuola: {
            switch( Card::GetSeed() ){
                case Hearts:    cout << (char) Card::GetSeed(); break;
                case Diamonds:  cout << (char) Card::GetSeed(); break;
                case Clubs:     cout << (char) Card::GetSeed(); break;
                case Spades:    cout << (char) Card::GetSeed(); break;
                default : cout << "er";
            }
        } break;
        default: {
            switch( programmLenguage ){
                case IT: {
                    switch( Card::GetSeed() ){
                        case Hearts:    cout << 'C'; break;
                        case Diamonds:  cout << 'Q'; break;
                        case Clubs:     cout << 'F'; break;
                        case Spades:    cout << 'P'; break;
                        default : cout << "er";
                    }
                } break;
                case EN: default: {
                    switch( Card::GetSeed() ){
                        case Hearts:    cout << 'H'; break;
                        case Diamonds:  cout << 'D'; break;
                        case Clubs:     cout << 'C'; break;
                        case Spades:    cout << 'S'; break;
                        default : cout << "er";
                    }
                } break;
            }
        } break;
    }
    cout << '-';
    switch( Card::GetValue() ){
        case 0: cout << 'j'; break;
        case 1: cout << 'A'; break;
        case 2: cout << '2'; break;
        case 3: cout << '3'; break;
        case 4: cout << '4'; break;
        case 5: cout << '5'; break;
        case 6: cout << '6'; break;
        case 7: cout << '7'; break;
        case 8: cout << '8'; break;
        case 9: cout << '9'; break;
        case 10: cout << 'd'; break;
        case 11: cout << 'J'; break;
        case 12: cout << 'Q'; break;
        case 13: cout << 'K'; break;
    }
    if( Card::GetVisibility() == UNFOLD ) cout << "]";
    else if( Card::GetVisibility() == FOLD ) cout << ">";
}

void Card::Set(Seed newSeed, int newValue, bool newVisibility){
    Card::SetSeed( newSeed );
    Card::SetValue( newValue );
    Card::SetVisibility( newVisibility );
}

#include "Deck.h"

Deck::Deck( deckType newType ){
    switch( newType ){
        case deckType_BlackJack: {
            ConsoleMessage( msgType_info, msgSpeed_auto, "Deck Type: Black jack deck" );
            SetPopulation( 52 );
            for( int i = 3; i < 7; i++ ){
                for( int j = 1; j < 14; j++ ){
                    Deck::m_Cards[m_Index].Set( (Seed)i, j, UNFOLD);
                    m_Index++;
                }
            }
        } break;
        default: cout << "Deck initialization error"; break;
    }
}

Deck::Deck(){
    for( int i = 3; i < 7; i++ ){
        for( int j = 0; j < 13; j++ ){
            Deck::m_Cards[i].Set( (Seed)i, j, UNFOLD);
            m_Index++;
        }
    }
    Deck::m_Cards[52].Set(Hearts, 0, UNFOLD);
    Deck::m_Cards[53].Set(Clubs, 0, UNFOLD);
}

Deck::~Deck(){
    //dtor
}

void Deck::Shuffle(){
    m_Index = m_Population;
    for( int i = 0; i < (m_Index); i++ ){
        std::swap( m_Cards[i], m_Cards[ rand() % (m_Index) ] );
    }
    for( int i = 0; i < m_Population; i++ ){
        m_Cards[i].SetFold();
    }
    m_Index = m_Population;
}

void Deck::Print(){
    indent();
    int offset = 1;
    for( int i = 0 + offset; i < Deck::m_Index + offset; i++ ){
        Deck::m_Cards[i - offset].Print(); cout << SPACE;
        if( ( i % 13 ) == 0 ) cout << LINE << "  ";
    }
}

Card Deck::Draw(){
    m_Index--;
    m_Cards[ m_Index ].SetUnfold();
    return m_Cards[ m_Index ];
}

bool Deck::CheckIndex(){
    if( Deck::GetIndex() > Deck::GetPopulation() ){
        return true;
    }
    return false;
}

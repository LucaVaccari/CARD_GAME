#include "BJ-Player.h"

BJ_Player::BJ_Player()
{
    //ctor
}

BJ_Player::~BJ_Player()
{
    //dtor
}

void BJ_Player::PrintHand(){
    indent();
    for( int i = 0; i < BJ_Player::m_Index; i++ ){
        BJ_Player::m_Hand[i].Print(); cout << " ";
    }
}

void BJ_Player::PickCard( Card newCard ){
    BJ_Player::m_Hand[ BJ_Player::m_Index ] = newCard;
    if( BJ_Player::m_Hand[ BJ_Player::m_Index ].GetValue() == 1 ){
        m_Ace = true;
    }
    m_Index++;
    BJ_Player::UpdateScore();
}

void BJ_Player::UpdateScore(){
    BJ_Player::m_Score = 0;
    for( int i = 0; i < BJ_Player::m_Index; i++ ){
        if( BJ_Player::m_Hand[ i ].GetValue() == 11 ) BJ_Player::m_Score += 10;
        else if( BJ_Player::m_Hand[ i ].GetValue() == 12 ) BJ_Player::m_Score += 10;
        else if( BJ_Player::m_Hand[ i ].GetValue() == 13 ) BJ_Player::m_Score += 10;
        else if( BJ_Player::m_Hand[ i ].GetValue() == 1  ) BJ_Player::m_Score += 11;
        else BJ_Player::m_Score += BJ_Player::m_Hand[ i ].GetValue();
    }
    if( ( BJ_Player::m_Score > 21 ) && ( BJ_Player::m_Ace == true ) ) BJ_Player::m_Score -= 10;
}

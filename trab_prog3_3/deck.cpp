#include <iostream>
#include "deck.h"
#include <iomanip>
#include <cstdlib>
#include <ctime>

Deck::Deck()
{
    for(int row = 0; row <= 3; row++)
    {
        for(int colun = 0; colun <= 12; colun++)
        {
            deck_comum[row][colun];
        }
    }
    srand(time(0));
    for(int row = 0; row <= 3; row++)
    {
        for(int colun = 0; colun <= 12; colun++)
        {
            deck_coringa[row][colun];
        }
    }
    srand(time(0));
}


void Deck::shuffle(){
    
}
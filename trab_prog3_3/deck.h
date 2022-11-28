#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <string>

#include "stack.h"
#include "carta.h"

class Deck{
    
    public:
        Deck();
        void shuffle();
        void deal();
    private:  
      Carta card; 
      Carta deck_comum[4][14];
      Carta deck_coringa[2][4];
};

#endif
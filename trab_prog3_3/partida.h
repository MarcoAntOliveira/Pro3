#ifndef PARTIDA_H
#define PARTIDA_H

#include "deck.h"
#include "jogador.h"
class Partida{

    public:
    Partida();
     
    private:
    Jogador player;
    Deck    monte;


};


#endif
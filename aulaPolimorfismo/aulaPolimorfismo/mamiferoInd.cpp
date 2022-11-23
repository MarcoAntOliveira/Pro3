#include <string>
#include <iostream>
using namespace std;

class Mamifero {
public :
virtual void emitirSom( ) { cout << "\n som de mamifero " ; } ;
} ;

class  Cachorro : public Mamifero {
public :
virtual void emitirSom( ) override { cout  << "\n woof woof " ; } ;
} ;

class Vaca : public Mamifero {
public :
virtual void emitirSom ( ) override { cout << "\n moo moo " ; } ;
} ;

class Bode : public Mamifero {
public :
virtual void emitirSom( ) override { cout << "\n baa baa " ; } ;
} ;

class Gato : public Mamifero {
public :
virtual void emitirSom( ) override { cout << "\n meow meow " ; } ;
} ;


int main ( ) {
Cachorro cachorro;
Vaca vaca;
Bode bode;
Gato gato;

Mamifero* p [ 5 ] = {
&cachorro, &vaca, &bode, &gato } ; 

for ( int  i= 0 ; i < 4 ; i ++)
{
p[ i ]->emitirSom( ) ;
}



return 0;
}



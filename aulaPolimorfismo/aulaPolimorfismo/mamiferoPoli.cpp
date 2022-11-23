#include <string>
#include <iostream>
#include <new>
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
Mamifero* p [ 5 ] = {
new Cachorro( ) ,
new Vaca( ) ,
new Bode( ) ,
new Gato( ) } ; 

for ( int  i= 0 ; i < 4 ; i ++)
{
p[ i ]->emitirSom( ) ;
}

return 0;
}



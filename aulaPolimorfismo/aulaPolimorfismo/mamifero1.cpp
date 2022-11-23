#include <string>
#include <iostream>
using namespace std;

class Mamifero {
public :
void emitirSom ( ) { cout << "\n som de mamifero " ; } ;
} ;
class  Cachorro : public Mamifero {
public :
void emitirSom ( ) { cout  << "\n woof woof " ; } ;
} ;
class Vaca : public Mamifero {
public :
void emitirSom ( ) { cout << "\n moo moo " ; } ;
} ;
class Bode : public Mamifero {
public :
void emitirSom ( ) { cout << "\n baa baa " ; } ;
} ;
class Gato : public Mamifero {
public :
void emitirSom ( ) { cout << "\n meow meow " ; } ;
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
}


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
Cachorro cachorro ;
Vaca vaca ;
Bode bode ;
Gato gato ;
cachorro.emitirSom ( ) ;
vaca.emitirSom ( ) ;
bode.emitirSom ( ) ;
gato.emitirSom ( ) ;
return 0;
}



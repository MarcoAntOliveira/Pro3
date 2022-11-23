#include <string>
#include <iostream>

using namespace std;
class Animal
{
//fazendo o construtor protegido para ser visivel 
// para classe derivada 
protected:
    std::string m_name;
    Animal(std::string name)
        : m_name(name)
    {
    }
 
public:
    std::string getName() { return m_name; }
    const char* emitirSom() { return "???" ;}
    void chamaSom(Animal *A);
};
 
class Gato: public Animal
{
public:
   Gato(std::string name)
        : Animal(name)
    {
    }
 
    const char* emitirSom() { return "Meow"; }
};
 
class Cachorro: public Animal
{
public:
    Cachorro(std::string name)
        : Animal(name)
    {
    }
 
    const char* emitirSom() { return "Woof"; }
};
 
 //Contruir uma funcao chamaSom que receba por referencia um tipo animal
 // e entao imprima o nome do animal recebido e seu som
  void Animal::chamaSom(Animal &A){

   std::cout << A.emitirSom() << A.getName();
 }
 
int main()
{
    Gato gato("Fred");
    Cachorro cachorro("Garbo");
 
    chamaSom(gato);
    chamaSom(cachorro);
}

//O que foi impresso?
// Como imprimir o som correto dos animais?

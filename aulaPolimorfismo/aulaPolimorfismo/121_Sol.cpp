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
    virtual const char* emitirSom() { return "???" ;}
};
 
class Gato: public Animal
{
public:
   Gato(std::string name)
        : Animal(name)
    {
    }
 
   virtual const char* emitirSom() override { return "Meow"; }
};
 
class Cachorro: public Animal
{
public:
    Cachorro(std::string name)
        : Animal(name)
    {
    }
 
   virtual const char* emitirSom() override { return "Woof"; }
};
 
void chamaSom(Animal &animal)
{
    std::cout << animal.getName() << " emite o som " << animal.emitirSom() << '\n';
}
 
 //Contruir uma funcao chamaSom que receba por referencia um tipo animal
 // e entao imprima o nome do animal recebido e seu som
 
int main()
{
    Gato gato("Fred");
    Cachorro cachorro("Garbo");
 
    chamaSom(gato);
    chamaSom(cachorro);
}

//O que foi impresso?
// Como imprimir o som correto dos animais?

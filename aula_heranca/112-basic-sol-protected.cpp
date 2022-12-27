/*Heranca publica:
-membros public da classe base:  como fazer copias dos
metodos e colocar como public na classe derivada
-membros private: nao sao passados, acessivel apenas pelo
metodos da classe BASE e suas funcoes amigas
-O modificador de acesso protected permite que um membro
seja acessı́vel por membros e funções amigas da classe base e
derivada
*/
#include <string>
#include <iostream>
using namespace std;
 
class Person
{
 protected:
   string m_name;
   int m_age;
   public:
    Person(string name = "", int age = 0)
    //construtor em lista
        : m_name(name), m_age(age)
    {
    }
    string getName() const { return m_name; }
    int getAge() const { return m_age; }
};

/*Classe BaseballPlayer herdou pblicamente de Person*/
class BaseballPlayer : public Person
{
protected:
    double m_battingAverage;
    int m_homeRuns;
public: 
   BaseballPlayer(string name = "", int age = 0, double battingAverage = 0.0, int homeRuns = 0)
       :  Person(name, age), m_battingAverage(battingAverage), m_homeRuns(homeRuns)
    {
    }
    void imprime(){
  // Nomeia jogador: .m_name de Person que eh protegido e visivel para BaseballPlayer
 cout << m_name<< '\n'; 
   //Couts:
 // outros atributos sao de BaseballPlayer
 cout <<"Indice de Rebatidas: " <<m_battingAverage << '\n'; //
 cout << "Home Runs: "<<m_homeRuns<< '\n'; 
    }
    
};


int main()
{
 // Cria um jogador joe
 BaseballPlayer joe;
 // Nomeia o jogador utilizando atributo m_name da classe BASE. Note que esse parametro
 //esta publico para a classe derivada
 joe.imprime();
    return 0;
}



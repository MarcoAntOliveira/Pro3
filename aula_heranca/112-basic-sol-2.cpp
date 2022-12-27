/*Heranca publica:
-membros public da classe base: é como fazer copias dos
métodos e colocássemos como public na classe derivada
-membros private: não são passados, acessı́vel apenas pelo
métodos da classe base e funções amigas
*/
#include <string>
#include <iostream>
using namespace std;
 
class Person
{
   private:
   string m_name;
   int m_age;
    public:
    Person(string name = "", int age = 0)
    //construtor em lista
        : m_name(name), m_age(age)
    {
    }
    void setName(string name) { m_name=name; }
    string getName() const { return m_name; }
    void setAge(int age){m_age=age; }
    int getAge() const { return m_age; }
};

// BaseballPlayer herdou publicamente de Person
//BaseballPlayer: tem acesso aos  metodos publicos de Person
// os membro privados de Person nao sao visiveis para BaseballPlayer
class BaseballPlayer : public Person
{
    private:
    double m_battingAverage;
    int m_homeRuns;
 public:
    BaseballPlayer(string name , int age = 0, double battingAverage = 0.0, int homeRuns = 0)
       :  Person(name, age), m_battingAverage(battingAverage), m_homeRuns(homeRuns)
    {
    }
    
    void setBatting(double battingAverage) { m_battingAverage=battingAverage; }
    double getBatting() const { return m_battingAverage; }
    void setHome(double homeRuns){m_homeRuns=homeRuns; }
    int getHome() const { return m_homeRuns; }
    void imprime(){
  // Nomeia jogador: getName de Person que eh publico  para BaseballPlayer
 cout << getName()<< '\n'; 
   //Couts:
 // outros atributos sao de BaseballPlayer
 cout <<"Indice de Rebatidas: " <<m_battingAverage << '\n'; //
 cout << "Home Runs: "<<m_homeRuns<< '\n'; 
    }
};


int main()
{
  // Chama o construtor de Baseball Player
  BaseballPlayer joe("Joe", 28, 0.6, 12);
 joe.imprime();

    return 0;
}



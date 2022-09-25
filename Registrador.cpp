#include <iostream>
#include <bits/stdc++.h>

class Regis_t 
{
  private:
    int cont_d[8] = {0,0,0,0,0,0,0,0};
  
  public:
      Regis_t();
      Regis_t(int i,int t);
      Regis_t(int i, int j, int k, int t);
      //~regis_t();
      void on();
      void off();
      
      void set_regis_t0(int i);
      void set_regis_t1(int i);
      
     void set_regis_t1_t(int i, int j, int k);
     void set_regis_t0_t(int i, int j, int k);
      
      int conv_t();
      void print_binary();
  
};

 void Regis_t::on(){
    cont_d[8] = 1;
    std::cout << "registrador ligado!!" << "\n";
    std::cout << "0 - 1 \n"<<"1 - 2  \n" <<"2 - 4 \n";
    std::cout <<"3 - 8 \n" <<"4 - 16 \n" <<"5 - 32 \n";
    std::cout <<"6 - 64 \n";
    std::cout <<"\n";
}

void Regis_t::off(){
    cont_d[8] = 0;
    std::cout <<"registrador desligado !!"<<"\n";
}


//aqui tá printando uns 0 não se assuste
void Regis_t::set_regis_t0(int i){
    cont_d[i] = 0;
    std::cout<< cont_d[i] << " -> " << i <<"\n\n";
}

void Regis_t::set_regis_t0_t(int i, int j, int k){
    cont_d[i] = 0;
    cont_d[j] = 0;
    cont_d[k] = 0;
    
    std::cout<< cont_d[i] << " -> " << i <<"\n\n";
    std::cout<< cont_d[j] << " -> " << j <<"\n\n";
    std::cout<< cont_d[k] << " -> " << k <<"\n\n";
}

//aqui tá printando uns 1 não se assuste
void Regis_t::set_regis_t1(int i){
    cont_d[i] = 1;
    std::cout<< cont_d[i] << " -> "<< i <<"\n\n"; 
    
}

void Regis_t::set_regis_t1_t(int i, int j, int k){
    cont_d[i] = 1;
    cont_d[j] = 1;
    cont_d[k] = 1;
    
    std::cout<< cont_d[i] << " -> " << i <<"\n\n"; 
    std::cout<< cont_d[j] << " -> " << j <<"\n\n";
    std::cout<< cont_d[k] << " -> " << k <<"\n\n";
}

int Regis_t::conv_t(){
    int number = 0;
    for(int i = 0 ; i < 7 ; i++){
        //aqui tem um cast para mudar o tipo de variavel
        // de binario para inteiro
        number = number + cont_d[i]*(int)(pow(2, i)+ 0.5);
    }
    
    return number;
}

/*printa o numero em binário , e inverte o vetor
 o primeiro bit é sinal ele não será printando
será printado como zero*/   
void Regis_t::print_binary(){
    std:: cout << 0;
    for(int i = 7; i >= 0; i--){
        std::cout << cont_d[i];
    }
    std :: cout <<"\n";
}

Regis_t::Regis_t(int i, int t){
    on();
    
    if (t == 1){
        set_regis_t1( i );
    } else if(t == 0){
        set_regis_t0( i );
    } 
    
}
Regis_t::Regis_t(int i,int j, int k, int t){
    
    if (t == 1){
        set_regis_t1_t( i, j, k );
    } else if(t  == 0){
        set_regis_t0_t( i, j, k );
    } 
    
}
int main()
{
    Regis_t ard(5, 1);
    ard.print_binary();
    
    ard.off();
    std::cout << ard.conv_t()<<"\n";
    
   
    Regis_t wall(7, 6, 1, 1);
    std::cout << wall.conv_t()<<"\n";
    
    Regis_t fahr(5 , 4, 3, 1);
  
    std::cout <<fahr.conv_t()<<"\n";
    
    
    
    

    return 0;
}

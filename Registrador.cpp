#include <iostream>
#include <bits/stdc++.h>

class regis_t {
  int cont_d[8] = {0,0,0,0,0,0,0,0};
  
  public:
  //int chama_classe();
 // regis_t();
  //~regis_t();
  void on();
  void off();
  void set_regis_t(int i);
  int conv_t();
  
};

 void regis_t::on(){
    cont_d[8] = 1;
    std::cout << "registrador ligado!!" << "\n";
    std::cout << "1 - 1 \n"<<"2 - 2  \n" <<"3 - 4 \n";
    std::cout <<"4 - 8 \n" <<"5 - 16 \n" <<"6 - 32 \n";
    std::cout <<"7 - 64 \n";
    
    
}

void regis_t::off(){
    cont_d[0] = 0;
    std::cout << cont_d[0] <<"\n"<<"registrador desligado !!"<<"\n";
}
//aqui tá printando uns 1 não se assuste
void regis_t::set_regis_t(int i){
    cont_d[i] = 1;
    std::cout<< cont_d[i] << "-> "<< i <<"\n"; 
    
}

int regis_t::conv_t(){
    int number = 0;
    for(int i = 0 ; i < 7 ; i++){
        //aqui tem um cast para mudar o tipo de variavel
        // de binario para inteiro
        number = number + cont_d[i]*(int)(pow(2, i)+ 0.5);
    }
    
    return number;
}
int main()
{
    regis_t ard;
    ard.on();
    ard.off();
    ard.set_regis_t(5);
    ard.set_regis_t(6);
    ard.set_regis_t(7);
    
    std::cout << ard.conv_t()<<"\n";
    

    return 0;
}


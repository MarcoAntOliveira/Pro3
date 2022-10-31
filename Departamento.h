#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
#include <iostream>
#include "funcionarios.h"
#include <vector>

class departamento{
    std::string departamento1;
    int qtd_func = 100;
    std::vector <funcionarios> funcionario1();
    
    public:
    departamento(std::string _departamento1);



};
#endif

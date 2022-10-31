#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H
#include <iostream>
#include <string>

class funcionarios{
std::string  nome;
int salario;
int data_de_admissao;

public:

funcionarios(std::string _nome, int _salario, int _data_de_admissao);

int upper_payment(int _salario);
};

#endif

#include <Empresa/funcionarios.h>
#include <iostream>



funcionarios::funcionarios(std::string _nome, int _salario, int _data_de_admissao){
nome = _nome;
salario = _salario;
data_de_admissao = _data_de_admissao; 
}

int upper_payment(int _salario){
    _salario = _salario + _salario*0.1;
}

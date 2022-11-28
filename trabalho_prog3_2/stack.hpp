#ifndef STACK_H
#define STACK_H
#include"lista.hpp"

#include <iostream>

template <typename T, class List>

class Pilha {
    public:
        Pilha(int tam);// construtor com tamanho Tam
        ~Pilha(){
            delete[] stack_ptr;
        }

        bool push(const T&);//insere elemento na pilha
        bool pop( T&);//retira elemento na pilha

        bool isEmpty() const
        {
            return top == -1;
        }
        bool isFull() const{
            return top == size -1 ;
        }
    private:
        int size;
        int top;
        T *stack_ptr;
        int tam;
         List lista;     
};
#endif
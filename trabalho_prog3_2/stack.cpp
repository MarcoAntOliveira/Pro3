#include "stack.hpp"
#include "lista.hpp"

//template contrutor da pilha construtor
template<typename T, class List>
Pilha< T , List > :: Pilha (int s)
:size(s > 0 ? s : tam),
top( -1 ),
stack_ptr(new T[size])
{

}

template<typename T, class List>
bool  Pilha <T, List>::push(const T &pushValue)
{
    if(!isFull())
    {
        stack_ptr[++top] = pushValue;
        return true;
    }
    return false;
} 

template <typename T, class List>
bool Pilha <T , List>::pop(T &popValue )
{
    if(!isEmpty())
    {
        popValue = stack_ptr[top --];
        return true;

    }     
    return false
}


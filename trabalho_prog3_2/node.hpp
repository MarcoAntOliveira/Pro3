#ifndef NODE_H
#define NODE_H
#include <iostream>

template<typename NODETYPE>

class Node{
    friend class List<NODETYPE>;
    public:
    
    Node(const NODETYPE&);
    NODETYPE getValue() const;
    private:
        NODETYPE value;
        Node<NODETYPE> *next;    

};

template<typename NODETYPE>
Node <NODETYPE>::Node( const NODETYPE &info )
    :value(info), next(0)
    {

    }
template <typename NODETYPE>
NODETYPE Node<NODETYPE>::getValue()const
{
    return value; 
}   




#endif
#ifndef LISTA_H
#define LISTA_H
#include "node.hpp"

#include <iostream>
template<typename NODETYPE>
class List{
public:
    List();
    ~List();
    void insertAtFront( const NODETYPE &);
    void insertAtBack( const NODETYPE &);
    bool removeFromFront(NODETYPE &);
    bool removeFromBack(NODETYPE &);
    bool isEmpty() const;
    void print() const;

private:
    Node<NODETYPE> *firstNode;
    Node<NODETYPE> *lastNode;  
    Node<NODETYPE> *getNewNode(const NODETYPE &);  
};


#endif
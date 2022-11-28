#include "lista.hpp"
#include "node.hpp"
#include <iostream>

template<typename NODETYPE>
List<NODETYPE>::List()
 :firstNode(0), lastNode(0)
{

}
template<typename NODETYPE>
List<NODETYPE>:: ~List()
{
    if(!isEmpty()){
        std::cout<< "Destroying Nodes ..\n";
        Node<NODETYPE>*currentPtr = firstNode;
        Node<NODETYPE> *tempPtr;
        while(currentPtr != 0 )
        {
            tempPtr = currentPtr;
            std::cout<<tempPtr -> value <<'\n';
            currentPtr = currentPtr ->next;
            delete tempPtr;
        }    
    }
    std::cout <<"All nodes destroyed :) \n\n" << std::endl;
}
template<typename NODETYPE>
void List<NODETYPE>::insertAtFront(const NODETYPE &value)
{
    Node<NODETYPE> *newPtr = getNewNode(value);
    if(isEmpty())
    firstNode = lastNode = newPtr;
    else
    {
        newPtr->next = firstNode;
        firstNode = newPtr
    }
}
template<typename NODETYPE>
void List<NODETYPE>::insertAtBack(const NODETYPE &value){
    Node<NODETYPE> *newPtr = getNewNode(value);
    if(isEmpty())
    firstNode = lastNode = newPtr;
    else{
        lastNode->next = newPtr;
        lastNode = newPtr; 
    }
}
template<typename NODETYPE>
bool List<NODETYPE>::removeFromFront(NODETYPE &value)
{
    if(isEmpty())
        return false;
        else{
            if(firstNode == lastNode)
                firstNode = lastNode = 0;
            else
            firstNode = firstNode ->next;
            value = tempPtr -> value;
            delete tempPtr;
            return true; 
        }


}


template<typename NODETYPE>
bool List <NODETYPE> ::removeFromBack(NODETYPE &value){
    if(!isEmpty())
    return false;
    else{
        Node<NODETYPE>*tempPtr = lastNode;
        if(firstNode == lastNode)
        firstNode = lastNode = 0
        else{
            Node<NODETYPE>currentPtr= firstNode;
            while(currentPtr -> next != lastNode)
                currentPtr =currentPtr ->next
                lastNode = currentPtr;
                currentPtr -> next = 0;
        }
    value = tempPtr ->value;
    delete tempPtr;
    return True;
    }
}

template<typename NODETYPE>
bool List<NODETYPE>::isEmpty()const{
    return firstNode == 0;
}
template<typename NODETYPE>
void List <NODETYPE>::print()const{
    if(isEmpty()){
        std::cout<<"A lista está vazia\n\n";
    }
    Node<NODETYPE> *currentPtr = firstNode;
    std::cout <<"the list is:";
    while (currentPtr != 0)
    {
        std<<currentPtr ->value <<' ';
        currentptr = currentPtr -> next;
    }
    std::cout <<"\n\n";
}


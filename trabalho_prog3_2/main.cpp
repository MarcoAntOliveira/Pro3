#include "stack.hpp"
#include "lista.hpp"
#include <iostream>
#include <string>


/*
int main(int argc, char** argv) {

    List list;
    int sentinela,numero;

    while(sentinela != 5){

        system("cls");
        std::cout << "Opcoes do menu:\n\n1-Inserir\n2-Excluir(parametro ponteiro)\n3-Excluir(parametro numero)\n4-Exbir a lista\n5-Sair\n\nOpcao desejada: ";
        std::cin >> sentinela;

        if(sentinela == 1){
            system("cls");
            std::cout << "Digite um numero: ";
            std::cin >> numero;
            list.push_back(numero);
        }

        if(sentinela == 2){
            system("cls");
            list.delete_after_aleatory(list.head);
            system("PAUSE");
        }

        if(sentinela == 3){
            system("cls");
            std::cout << "Digite um numero: ";
            std::cin >> numero;
            list.delete_find_number(numero);
            system("PAUSE");
        }

        if(sentinela == 4){
            system("cls");
            list.print();
            system("PAUSE");
        }
*/

    template<typename T>
    void testList(List<T> &listObject, const std::string &typeName )
    {
        std::cout << "testing a List of " <<typeName << "values\n";
       // instructions();

        int choice;
        T value;
        do
        {
            std::cout<<"?";
            std::cin >> choice;
            switch(choice)
            {
                case 1:
                    std::cout << "Enter"<<typeName <<": ";
                    std::cin >> value;
                    listObject.insertAtFront( value );
                    listObject.print();
                    break;

                case 2:
                    std::cout << "Enter"<<typeName <<": ";
                    std::cin >> value;
                    listObject.insertAtBack( value );
                    listObject.print();
                    break;

                case 3:
                    if( listObject.removeFromFront( value ))
                    std::cout << "removed from list\n";
                    listObject.print();
                    break;
                case 4:
                    if( listObject.removeFromBack( value ))
                    std::cout <<value <<"removed from list\n";
                    listObject.print();
                    break;    
            }
        } while(choice != 5 );
        std::cout << "End list test\n\n";    
    }
/*void instructions(){ 
    std:: cout << "Enter one of the following:\n" 
                << " 1 to insert at beginning of list\n"
                << "2 to insert at end of list\n"
                << " 3 to delete from beginning of list\n" 
                << "4 to delete from end of list\n"
                << " 5 to end list processing\n";
} // fim da função instructions
*/
 int main(){
    List< int > integerList;
    testList(integerList, "integer");

    List<double> doubleList;
    testList(doubleList, "double");
return 0;
 }   
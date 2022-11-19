#include <iostream>
#include <vector>


int main(){
    std::vector<int> num;
    int Tam, i;

    num.push_back(10);
    num.push_back(2);
    num.push_back(5);
    num.push_back(18);

    Tam = num.size();
    std::cout << "tamanho do vector: "<< Tam<<std::endl;

    return 0;
}

#include <iostream>
#include <iomanip>

class PhoneNumber{
friend std::ostream &operator<< (std::ostream &, const PhoneNumber &);
friend std::istream &operator>> (std::istream &, PhoneNumber &);
private:
std::string areaCode;
std::string exchange;
std::string line;
};
// sobrecarga do operador de saida com a finalidade de impressão do numero 
 std::ostream &operator<<(std::ostream &output, const PhoneNumber  &number){
    output<<"("<<number.areaCode<<")"
    << number.exchange<<"-"<< number.line;
    return output;
}

std ::istream &operator>>(std::istream &input , PhoneNumber &number){
    input.ignore();
    input >> std::setw(3) >> number.areaCode;
    input >>std::setw(3) >> number.exchange;
    input.ignore();
    input >> std::setw(4) >> number.line;
    return input; 

}

int main()
{
    PhoneNumber phone;
    std :: cout <<"Enter phone number in the form (123) 456-7890: "<< std::endl;
    std :: cin >> phone;
    std :: cout << phone << std:: endl;

return 0;
}

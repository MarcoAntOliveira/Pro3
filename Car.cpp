#include <iostream>
#include <iomanip>

class Car{

    int  price;
    int  power; 

    public:
     Car();
     Car(int _price, int _power);
     void set_price(int _price);
     int get_price();
     void set_power(int _power);
     int get_power();

     Car operator+ (const Car &obj){
        Car temp;
        temp.power = power + obj.power;
        temp.price = price + obj.price; 
     } 
    friend std::ostream &operator<< (std::ostream &, const Car &);
    friend std::istream &operator>> (std::istream &, Car &);
};

Car::Car(){}

Car::Car(int _price, int _power){
    _price = price;
    _power =  power;
}
void Car :: set_price(int _price){
    _price = price;
}
int Car::get_price(){
    return price;
}
void Car:: set_power(int _power){
   _power = power; 
}
int Car:: get_power(){
 return power;
}

Car operator+(Car &obj1, Car &obj2){
    Car temp;
    temp.set_power(obj1.get_power() + obj2.get_power());
    temp.set_price(obj1.get_price() + obj2.get_price());
}

Car operator*(Car &obj1, Car &obj2){
    Car temp;
    temp.set_power(obj1.get_power() * obj2.get_power());
    temp.set_price(obj1.get_price() * obj2.get_price());
}
std::ostream &operator<<(std::ostream &output, const Car &obj1){
    output<< obj1.power << "\n" << obj1.price;
    return output;
}
std ::istream &operator>>(std::istream &input , Car &obj1){
    input.ignore();
    input >> std::setw(3) >> obj1.power;
    input.ignore(2);
    input >> std::setw(3) >> obj1.price;
    
    return input; 

}


int main(){
    Car BMW;
    Car Mercedes;
    BMW.set_power(5600);
    Mercedes.set_power(3670);
    Car New_Car;

    int y = BMW.get_power() + Mercedes.get_power();
    std ::cout << y <<std::endl;
    int z = BMW.get_power() * Mercedes.get_power();
    std ::cout << z <<std::endl;

    //std::cout <<"powers New _car "<< New_Car.get_power()<<std::endl;

    Car BMW_z4;
    //Car BMW_250i;

    std::cout<< "insert the power and price of the BMW_z4:"<<std::endl;
    std::cin >>BMW_z4;

   /* std::cout<< "insert the power and price of the BMW_250i:";
    std::cin >>BMW_250i;
    */
    std:: cout <<"\nBMW_z4 \n"<< BMW_z4 <<std::endl;
    std:: cout << BMW_z4.get_power() << " " << BMW_z4.get_price() << std::endl;
    //std::cout <<"BMW_250i"<< BMW_250i <<std::endl;

    return 0;
}

 


#include <iostream>
#include <memory>
class Myclass{
    public:
    Myclass(){
        std::cout <<"constructor invocked"<< std ::endl;
    }
    ~Myclass(){
        std::cout <<"dstructor invocked" << std::endl;
    }

};

int main(){
    //created  e destucted a unique pointer 
    /*
    std::unique_ptr<int>unPtr1 = std::make_unique<int>(25);
    std::unique_ptr<int>unPtr2 = move(unPtr1);
    std::cout << &unPtr2 << std::endl;
    //std::cout  << &unPtr1 << std::endl;
    */
   /*{
    std::unique_ptr<Myclass>unPtr1 = std::make_unique<Myclass>();
   }*/
   //created a shared pointer
   {
   std::shared_ptr<Myclass>shd_ptr1 = std::make_shared<Myclass>();
   std::cout<<"shared cout "<< shd_ptr1.use_count()<< std::endl;
   {
   std::shared_ptr<Myclass>shd_ptr2 = shd_ptr1;
   std::cout<<"shared cout "<< shd_ptr1.use_count()<< std::endl;
   }
   std::cout<<"shared cout "<< shd_ptr1.use_count()<< std::endl;
   }
    system ("pause>nul");
}

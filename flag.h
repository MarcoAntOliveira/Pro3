#include<iostream>

#include<string>
using std::string;

class gradebook
{
 public:
    gradebook( string );
    void set_course_name( string );
    void determine_class_average();
 private:
    string course_Name;
};

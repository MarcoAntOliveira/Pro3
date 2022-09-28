#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "gradebook.h"

gradebook::gradebook( string name )
{
    set_course_name( name );
}

void gradebook::determine_class_average()
{
    int total;
    int grade_counter;
    int grade;
    double average;
    
    total = 0;
    grade_counter = 0;
    
    cout << " Enter grade or -1 to quit: ";
    cin >> grade;
    
    while ( grade != -1 )
    {
        total = total + grade;
        grade_counter = grade_counter + 1;
        
        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }
    
    if ( grade_counter !=0 ){
        average = static_cast< double >( total )/ grade_counter;
        
        cout <<"\nTotal of all" << grade_counter <<"grades entered is"
        << total << endl;
        cout << "class average is " << setprecision(2) << fixed <<  average
        << endl;
    }
    
    else
    {
        cout << "No grades were entered" << endl;
    }
}
    
    
    
    
    
    
    
    
    

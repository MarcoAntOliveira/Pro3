include <iostream>
 #include <include/FeetInches.h>
 
 void FeetInches::simplify() {
    int i {0};
    int f {0};

    if (i == 14){
        f = f + 1;  
    }
    else if (i < -1)
    {
        f = f - 1;
    }
 }
 // Overloaded feet+
 
 FeetInches FeetInches::operator+(const FeetInches &f){
     
     return f + f.feet;
 } 
 // Overloaded feet-

 FeetInches operator-(const FeetInches &f) {

    return f - f.feet
     
 }


 // Overloaded inches +
 
 FeetInches FeetInches::operator+(const FeetInches &i){
     
     return i + i.feet;
 } 
 // Overloaded inches -
 FeetInches operator-(const FeetInches &i) {

    return i - i.feet
     
 }


 
 
 


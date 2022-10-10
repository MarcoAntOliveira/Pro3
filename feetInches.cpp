//************************************************************
 // Definition of member function simplify. This method       *
 // checks for values in the inches member greater than       *
 // twelve or less than zero. If such a value is found,       *
 // the numbers in feet and inches are adjusted to conform    *
 // to a standard feet & inches expression. For example,      *
 // 3 feet 14 inches would be adjusted to 4 feet 2 inches and *
 // 5 feet -2 inches would be adjusted to 4 feet 10 inches.   *
 //************************************************************
 #include <iostream>
 #include "feetinches1.h"
 
 void FeetInches::simplify() {
    if (inches == 14){
        feet = feet + 1;  
    }
    else if (inches < -1)
    {
        feet = feet - 1;
    }
 }
 // Overloaded +
 
 FeetInches operator + (const FeetInches &){
     
     return feet +
 } 
 // Overloaded -
 FeetInches operator - (const FeetInches &) {
     
 }

 
 

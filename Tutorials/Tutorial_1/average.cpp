// average.cpp
// This program finds the average of two numbers.
// It contains two errors that must be fixed.
#include <iostream>            

double result();

int main ()
{
	
   result();
   
   
   return 0;
}

double result(){
    float size = 2;             // The number of values to be averaged      
   float num1,            
          num2,
          average;           // Average of num1 and num2
// Get the two numbers        
   std::cout << "Enter two numbers separated by one or more spaces: ";
   std::cin  >> num1 >> num2;
   
   // Calculate the average
	average = (num1 + num2) / size;
 
	// Display the average
   std::cout << "The average of the two numbers is: \n" << average << std::endl;
}

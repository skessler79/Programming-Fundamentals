// This program illustrates the use of the switch statement.

// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;

int main()
{
   char grade;

   cout << "What grade did you earn in Programming I ?" << endl;
   cin >> grade;
   
   switch(grade){
        case 'A':
        case 'B':
        case 'C':
        case 'D': cout << "You passed\n";
   
   }
   
   if (grade == 'A'){
        cout << "an A - excellent work !" << endl;
   }
   else if (grade == 'B'){
        cout << "you got a B - good job" << endl;
   }
   else if (grade == 'C'){
        cout << "earning a C is satisfactory" << endl;
   }
   else if (grade == 'D'){
        cout << "while D is passing, there is a problem" << endl;
   }
   else if (grade == 'F'){
        cout << "you failed - better luck next time" << endl;
   }
   else{
   
   }

   /*
   switch (grade)   // This is where the switch statement begins
   {
      case 'A': cout << "an A - excellent work !" << endl;
                break;
      case 'B': cout << "you got a B - good job" << endl;
                break;
      case 'C': cout << "earning a C is satisfactory" << endl;
                break;
      case 'D': cout << "while D is passing, there is a problem" << endl;
                break;
      case 'F': cout << "you failed - better luck next time" << endl;
                break;
      default: cout << "You did not enter an A, B, C, D, or F" << endl;
   }
*/

   return 0;
}
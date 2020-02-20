// This program finds the average time spent programming by a student
// each day over a three day period.

// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;

int main()
{
   int numStudents;
   float numHours, total, programming, average;
   int student, day = 0, totalDays;   // these are the counters for the loops

   cout << "This program will find the average number of hours a day"
       << " that a student spent programming over a long weekend\n\n";
   cout << "How many students are there ?" << endl << endl;
   cin >> numStudents;
   cout << "How many days are there ?" << endl << endl;
   cin >> totalDays;

   for (student = 1; student <= numStudents; student++)
   {
      total = 0;
      programming = 0;

      for (day = 1; day <= totalDays; day++)
      {
         cout << "Please enter the number of hours worked on biology by student "
             << student << " on day " << day << "." << endl;
         cin >> numHours;

         total = total + numHours;
         
         cout << "Please enter the number of hours worked on programming by student "
             << student << " on day " << day << "." << endl;
         cin >> numHours;

         programming = programming + numHours;
      }

      average = total / totalDays;

      cout << endl;
      cout << "The average number of hours per day spent on biology by "
          << "student " << student << " is " << total / totalDays
          << endl << endl << endl;
      cout << "The average number of hours per day spent programming by "
          << "student " << student << " is " << programming / totalDays
          << endl << endl << endl;
   }

   return 0;
}

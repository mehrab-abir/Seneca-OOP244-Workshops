/***********************************************************************

I have done all the coding by myself and only copied the code that my professor provided to complete my
workshops and assignments.

Name: Mehrab Jalil Abir
email: mjabir@myseneca.ca
Student ID: 164479230
Section: NRB
Date: Jan 24, 2025

/////////////////////////////////////////////////////////////////
***********************************************************************/
#include <iostream>
#include "input.h"
using namespace std;
namespace seneca {
   int getInt() {
      int num = 0;
      bool done = false;
      do {
         // extract an integer from the console and put it in num
         cin >> num;
         // if this action fails (the integer is unreadable)
         if (cin.fail()) {
            cout << "Bad integer entry, please try again:\n> ";
            // clear the failure status to activate cin again
            cin.clear();
         }
         else {
            done = true;
         }
         // flush the keyboard buffer up to 1000 characters or '\n', whichever comes first
         cin.ignore(1000, '\n');
      } while (!done);
      return num;
   }

   int getInt(int minVal, int maxVal) {
       int num;
       bool done = false;

       int i = 0;

       do {
          if (i != 0) {
               cout << "> ";
           }
           i++;

           cin >> num;
           if (cin.fail()) {
               cout << "Bad integer entry, please try again:\n";
               cin.clear();
           }
           else {
               if (num >= minVal && num <= maxVal) {
                   done = true;
               }
               else {
                   cout << "Invalid value, [3<ENTRY<5]" << endl;
               }
           }
           cin.ignore(1000, '\n');
       } while (!done);
       return num;
   }


   bool getInt(int& num, int minVal,int maxVal ) {
       int number;

       while(true){
           cin >> number;

           if (cin.fail()) {
               cout << "Bad integer entry, please try again:\n> ";
               cin.clear();
           }
           else{
               if (number >= minVal && number <= maxVal) {
                   num = number;
                   return true;
               }
               else {
                   return false;
               }
           }
           cin.ignore(1000, '\n');
       };
       return false;
   }
}


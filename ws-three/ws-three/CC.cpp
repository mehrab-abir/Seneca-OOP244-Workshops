/***********************************************************************

I have done all the coding by myself and only copied the code that my professor provided to complete my
workshops and assignments.

Name: Mehrab Jalil Abir
email: mjabir@myseneca.ca
Student ID: 164479230
Section: NRB
Date: Jan 31, 2025

/////////////////////////////////////////////////////////////////
***********************************************************************/

#include <iostream>
#include "cstr.h"
#include "CC.h"
using namespace std;
namespace seneca {
   void CC::prnNumber(unsigned long long no) const {
      cout << no / 1000000000000ull << " ";
      no %= 1000000000000ull;
      cout.fill('0');
      cout.width(4);
      cout.setf(ios::right);
      cout << no / 100000000ull << " ";
      no %= 100000000ull;
      cout.width(4);
      cout << no / 10000ull << " ";
      no %= 10000ull;
      cout.width(4);
      cout << no;
      cout.unsetf(ios::right);
      cout.fill(' ');
   }
   void CC::display(const char* name, unsigned long long number, short expYear, short expMon, short cvv) const{
      char lname[31]{};
      strcpy(lname, name, 30);
      cout << "| ";
      cout.width(30);
      cout.fill(' ');
      cout.setf(ios::left);
      cout << lname << " | ";
      prnNumber(number);
      cout << " | " << cvv << " | ";
      cout.unsetf(ios::left);
      cout.setf(ios::right);
      cout.width(2);
      cout << expMon << "/" << expYear << " |" << endl;
      cout.unsetf(ios::right);
   }

   //input validation function
   bool CC::validate(const char* name,
       unsigned long long cardNo,
       short cvv,
       short expMon,
       short expYear)const {
       if (name == NULL || strlen(name) <= 2 ) {
           return false;
       }
       else if (cardNo < 4000000000000000 || cardNo > 4099999999999999) {
           return false;
       }
       else if (cvv < 100 || cvv > 999) {
           return false;
       }
       else if (expMon < 1 || expMon > 12) {
           return false;
       }
       else if (expYear < 24 || expYear > 32) {
           return false;
       }
       else {
           return true;
       }
   }

   //setting the object to safe empty state
   void CC::set() {
       name = nullptr;
       cvv = 0;
       expMon = 0;
       expYear = 0;
       number = 0;
   }

   void CC::cleanUp() {
       freeMem(name);
       set();
   }

   //cheacking if the object is in safe empty state
   bool CC::isEmpty() const {
       if (name == NULL) {
           return true;
       }
       else {
           return false;
       }
   }

   //setting values to the attributes
   void CC::set(const char* cc_name,
       unsigned long long cc_no,
       short cc_cvv,
       short cc_expMon,
       short cc_expYear) {
       cleanUp();  // Reset object

       if (validate(cc_name, cc_no, cc_cvv, cc_expMon, cc_expYear)) {
           alocpy(name, cc_name);
           number = cc_no;
           cvv = cc_cvv;
           expMon = cc_expMon;
           expYear = cc_expYear;
       }
   }

   //displaying cc information
   void CC::display() const {
       if (isEmpty()) {
           std::cout << "Invalid Credit Card Record" << std::endl;
       }
       else {
           display(name, number, expYear, expMon, cvv);
       }
   }
}
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "utils.h"

/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and
assignments.

Name: Mehrab Jalil Abir
Student ID: 164479230
Section: NRB
*/

using namespace std;

namespace seneca {
    // flushes the keyboard
    void flushkeys() {
        while (cin.get() != '\n');
    }

    // returns true if user enter y or Y
    bool yes() {
        char ch = cin.get();
        flushkeys();
        return ch == 'y' || ch == 'Y';
    }

    // copies src Cstring to des and converts all characters to lowercase
    // at the same time.
    void toLowerCase(char* des, const char* src) {
        int i = 0;
        while (src[i]) {
            des[i] = src[i];
            if (des[i] >= 'A' && des[i] <= 'Z') {
                des[i] += ('a' - 'A');
            }
            i++;
        }
        des[i] = 0;
    }
}
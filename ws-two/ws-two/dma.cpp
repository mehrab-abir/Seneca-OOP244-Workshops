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
#include "dma.h"
using namespace std;
namespace seneca {

	void reverse() {
		int n;
		cout << "Enter the number of double values:\n> ";
		cin >> n;

		double* arr = new double[n];

		for (int i = 0; i < n; i++) {
			cout << i+1 <<"> ";
			cin >> arr[i];
		}

		for (int i = n - 1; i >= 0; i--) {
			cout << arr[i] << endl;
		}

		delete[] arr;
	}

	Contact* getContact() {
		Contact* person = new Contact;

		cout << "Name: ";
		cin >> person->m_name;

		cout << "Last name: ";
		cin >> person->m_lastname;

		cout << "Phone number: ";
		cin >> person->m_phoneNumber;

		return person;
	}

	void display(const Contact& C) {
		cout << C.m_name << " " << C.m_lastname << ", +" << C.m_phoneNumber << "\n";
	}

	void setEmpty(Contact& C) {
		C.m_name[0] = '\0';
		C.m_lastname[0] = '\0';
		C.m_phoneNumber = 0;
	}

	void deallocate(Contact* C) {
		delete C;
	}
}

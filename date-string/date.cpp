#include "date.h"
#include <iostream>
#include <algorithm>

Date::Date(std::string date) {

	this->date = date;

}

Date::~Date() {}

void Date::pullApartDate() {

	std::string word;

	try {

		for (auto x : this->date) {
			if (x == '/') {
				dateVector.push_back(word);
				word = "";
			}
			else {
				word = word + x;
			}
		}
		dateVector.push_back(word);
		for (int i = 0; i < dateVector.size(); i++) {

			std::cout << dateVector.at(i) << std::endl;

		}

	}
	catch (const std::string error) {

		std::cout << "Error: " << error << std::endl;

	}


}

void Date::castAndVerifyInteger() {

	try {

		for (int i = 0; i < dateVector.size(); i++) {

			int num = atoi(dateVector.at(i).c_str());
			dateInt.push_back(num);
		}
		/*if (dateInt.at(0) % 2 || dateInt.at(1) % 2 || dateInt.at(2) % 2) {
			std::cout << "Numeros decimales ingresados no validos" << std::endl;
			system("pause");
		}
		else {
			verifyValidDate();
		}*/
		for (int i = 0; i < dateVector.size(); i++) {

			int num = atoi(dateVector.at(i).c_str());
			dateInt.push_back(num);

		}

	}
	catch (const std::string error) {

		std::cout << "Error: " << error << std::endl;

	}

}


void Date::verifyValidDate() {

	if (dateInt.at(1) > 31 || dateInt.at(2) > 12) {

		std::cout << "Fecha invalida\n Ingresa dias o meses dentro de lo establecido" << std::endl;

	}
	else {

		verifyLeapYear();
	}

}

void Date::verifyLeapYear() {

	if (dateInt.at(0) % 4 == 0 && dateInt.at(0) % 100 != 0 && dateInt.at(1) == 29 && dateInt.at(2) == 02) {
		std::cout << "Fecha valida. Anio bisiesto" << std::endl;
	}
	else {
		std::cout << "Fecha valida. Anio NO bisiesto" << std::endl;
	}

}

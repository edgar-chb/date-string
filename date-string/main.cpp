#include "date.h"
#include <iostream>
int main() {

	int option = 1;

	std::string fecha;

	do {
		std::cout << "Ingrese una fecha con el siguiente formato: yyyy/dd/mm" << std::endl;
		std::cin >> fecha;
		Date date(fecha);
		date.pullApartDate();
		date.castAndVerifyInteger();
		date.verifyValidDate();

	} while (option != 0);

	return 0;
}
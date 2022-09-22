#pragma once
#include <iostream>
#include <vector> 
#include <string>
class Date
{

private:

	std::string date;

	std::vector <int> dateInt;

	std::vector <std::string> dateVector;

public:

	Date(std::string);

	~Date();

	void pullApartDate();

	void castAndVerifyInteger();

	void verifyValidDate();

	void verifyLeapYear();
};


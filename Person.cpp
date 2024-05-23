#include "Person.h"

Person::Person()
{
	this->birthDate = 0;
	this->name = "Unknown";
}

Person::Person(int birthDate, string name)
{
	this->birthDate = birthDate;
	this->name = name;
}

Person Person::setBirthDate(const int birthDate)
{
	this->birthDate = 0;
	return Person();
}

void Person::printPerson()
{
	cout << birthDate << "\t" << name << endl;
}

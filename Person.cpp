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

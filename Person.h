#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person
{
	int birthDate;
	string name;
public:
	Person();
	Person(int, string);

	Person setBirthDate(const int birthDate);

	void printPerson();
};


#include <iostream>
using namespace std;
#include "Person.h"

int main()
{
	setlocale(LC_ALL, "Russian");
    cout << "Hello World!\n";
	cout << "Привет Мир!\n";

	cout << "Класс человек: " << endl;

	Person a(2001, "Maks");
	a.printPerson();
	
}


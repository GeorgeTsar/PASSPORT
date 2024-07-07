#include "Passport.h"

Passport::Passport()
{
	name = nullptr;
	surname = nullptr;
	city = nullptr;
	age = 0;
}

Passport::Passport(const char* n, const char* s, const char* c, int a)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	surname = new char[strlen(s) + 1];
	strcpy_s(surname, strlen(s) + 1, n);
	city = new char[strlen(c) + 1];
	strcpy_s(city, strlen(c) + 1, n);
	age = a;
}

Passport::~Passport()
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (surname != nullptr)
	{
		delete[] name;
	}
	if (city != nullptr)
	{
		delete[] name;
	}
	age = 0;
}

void Passport::show_passport()
{
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "City: " << city << endl;
	cout << "Age: " << age << endl;
}

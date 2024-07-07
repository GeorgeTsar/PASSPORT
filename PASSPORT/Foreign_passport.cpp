#include "Foreign_passport.h"

Foreign_passport::Foreign_passport()
{
	visa = nullptr;
	number = 0;
}

Foreign_passport::Foreign_passport(const char* n, const char* s, const char* c, int a, const char* v, double num) :Passport(n, s, c, a)
{
	visa = new char[strlen(v) + 1];
	strcpy_s(visa, strlen(v) + 1, v);
	number = num;
}

Foreign_passport::~Foreign_passport()
{
	if (visa != nullptr)
	{
		delete[] visa;
	}
	number = 0;
}

void Foreign_passport::show()
{
	show_passport();
	cout << "Visa: " << visa << endl;
	cout << "Number: " << number << endl;
}

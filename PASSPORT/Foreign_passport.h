#pragma once
#include "Passport.h"

class Foreign_passport : public Passport
{
	char* visa;
	double number;
public:
	Foreign_passport();
	Foreign_passport(const char* n, const char* s, const char* c, int a, const char* v, double num);
	~Foreign_passport();
	void show();
};


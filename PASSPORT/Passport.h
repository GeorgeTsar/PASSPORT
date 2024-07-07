#pragma once
#include<iostream>
using namespace std;

class Passport
{
protected:
	char* name;
	char* surname;
	char* city;
	int age;
public:
	Passport();
	Passport(const char*, const char*, const char*, int);
	~Passport();
	void show_passport();
};


#pragma once
class Number
{
	// add data members
	int base;
	char* value;

public:

	Number(const char* value, int base); // where base is between 2 and 16
	~Number();

	// add operators and copy/move constructor
	Number();
	Number(const Number& nr); //copy constructor
	Number(const Number&& nr); //move constructor

	Number operator+(Number nr); //adition
	Number operator+(int numar); //adition
	Number operator-(Number ex); //substract
	friend int operator-(Number nr, int numar); //substract
	
	bool operator!();
	int operator[](int index); //index operator

	Number& operator=(Number&& nr); //move asignment operator

	bool operator<(Number ex);
	bool operator>(Number ex);
	bool operator<=(Number ex);
	bool operator>=(Number ex);
	bool operator==(Number ex);
	bool operator<(int numar);
	bool operator>(int numar);
	bool operator<=(int numar);
	bool operator>=(int numar);
	bool operator==(int numar);

	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base
};


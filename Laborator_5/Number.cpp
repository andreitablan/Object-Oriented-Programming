#include "Number.h"
#include<cstring>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include<iostream>
Number::Number(const char* value, int base)
{
	if (base >= 2 && base <= 16)
		this->base = base;
	else
		this->base = -1;
	this->value = new char[strlen(value) + 1];
	memcpy(this->value, value, strlen(value) + 1);
}

Number::~Number()
{
	this->base = 0;
	this->value = nullptr;
}
Number::Number(const Number& nr)
{
	printf("Copy constructor\n");
	this->value = nr.value;
}
Number::Number(const Number&& nr) 
{
	printf("Move constructor\n");
	this->value = nr.value;
}

void Number::SwitchBase(int newBase)
{
	//scriu numarul in baza 10 si dupa in newBase
	char s[256];
	

}

void Number::Print()
{
	printf("%s", this->value);
}

int Number::GetDigitsCount()
{
	return (strlen(this->value));
}

int Number::GetBase()
{
	return this->base;
}
#include "Math.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>


int Math::Add(int number1, int number2)
{
	int number = number1 + number2;
	return number;
}

int Math::Add(int number1, int number2, int number3)
{
	int number = number1 + number2 + number3;
	return number;

}

int Math::Add(double number1, double number2)
{
	double number = number1 + number2;
	return number;

}

int Math::Add(double number1, double number2, double number3)
{
	double number = number1 + number2;
	return number;

}

int Math::Mul(int number1, int number2)
{
	int number = number1 * number2;
	return number;
}

int Math::Mul(int number1, int number2, int number3)
{
	int number = number1*number2*number3;
	return number;
}

int Math::Mul(double number1, double number2)
{
	return number1 * number2;
	
}

int Math::Mul(double number1, double number2, double number3)
{
	double number = number1*number2*number3;
	return number;

}

int Math::Add(int count, ...)
{  
	va_list pargs;
	int suma = 0;
	va_start(pargs, count);
	for (int i = 0; i < count; i++)
		suma = suma + va_arg(pargs, int);
	va_end(pargs);
	return suma;

}
/*
char Math::Add(const char* text1, const char* text2)
{
	int number1 = strlen(text1);
	int number2 = strlen(text2);
}*/
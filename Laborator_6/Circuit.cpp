#include "Circuit.h"
Circuit::Circuit()
{
	this->n = 100;
	this->index = 0;
	this->masini = (Car**)(malloc(this->n * sizeof(Car*)));
}
Circuit::~Circuit(){}

int Circuit::SetLenght(int lenght)
{
	this->Lenght = lenght;
}
bool Circuit::AddCar(Car* masina)
{
	if (this->index < this->n)
	{
		this->masini[this->index++] = masina;
		return true;
	}
	return false;
}
int Circuit::SetWeather(int weather)
{
	this->weather = weather;
}
void Race()
{}
void ShowFinalRanks()
{
}
void ShowWhoDidNotFinish()
{}
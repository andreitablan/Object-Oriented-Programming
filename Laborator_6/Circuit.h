#pragma once
#include "Car.h"
#include <stdlib.h>
class Circuit
{
	Car** masini;
	int index;
	int n;
	int Lenght, weather;
	Circuit();
	~Circuit();
public:
	int SetLenght(int);
	int SetWeather(int);
	bool AddCar(Car* pointer);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();

};


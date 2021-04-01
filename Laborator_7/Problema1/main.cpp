#include <stdio.h>
#include <iostream>
using namespace std;
float operator"" _Kelvin(unsigned long long int x)
{
	float C = x - 273.15;
	return C;
}
float operator"" _Fa(unsigned long long int x)
{
	float C = (x - 32) / 1.8;
	return C;
}
int main() 
{

    float a = 300_Kelvin;

    float b = 120_Fa;
	printf("a= %f si b= %f", a, b);

	system("pause");
    return 0;

}

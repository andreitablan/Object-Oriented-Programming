/*Write a program in C-Language that open the file "in.txt", and prints the sum of the numbers that
are found on each line of the file in.txt. To open the file use fopen API. Write your own function 
that converts a string to a number (similar cu atoi API). To print something to the screen, use the 
printf API.
Example: let's consider the following "ini.txt" file:
   			 123
   			 198698
   			 5009
   			 983279
The program will print to the screen 1187109.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Declaram antetele functiilor pentru a le folosi oriunde in program de la declaratie in jos 
void citire_din_fisier();
void Ruleaza_programul();
void Text_problema();
void transforma(char myString[200], int& numar);

void citire_din_fisier()
{   
	int suma = 0;
	FILE* fp;
	if (fopen_s(&fp, "in.txt", "r") != 0)
	{
		printf("%s", "Eroare! Nu am putut deschide fisierul, alege alta cariera!\n");
	}
	else
	{
		printf("%s", "Am deschis fisierul cu succes si rezultatul problemei este: \n");
		char myString[200];
		/*if(fgets(myString, 200, fp))
		   printf("am citit din fisier: %s\n", myString);
		*/
		while (fgets(myString, 200, fp))
		{   
			myString[strlen(myString)-1] = '\0';
			int numar = 0;
			transforma(myString, numar);
			suma = suma + numar;
		}
		printf("%d\n", suma);
	}
}
void Ruleaza_programul()
{ 
	Text_problema();
	citire_din_fisier();
}

void Text_problema()
{
	// Date despre student, detalii
	printf("TABLAN ANDREI - 1A5, OOP 2021 - LABORATOR 1 - PROBLEMA 2 \n\n");

	// Enuntul problemei
	printf("   Write a program in C-Language that open the file <in.txt>, and prints the sum of the numbers that\n");
	printf(" are found on each line of the file in.txt. To open the file use fopen API. Write your own function \n");
	printf(" that converts a string to a number (similar cu atoi API). To print something to the screen, use the \n");
	printf(" printf API.\n");
	printf("   Example: let's consider the following <ini.txt> file:\n");
	printf("   			 123\n");
	printf("   			 198698\n");
	printf("   			 5009\n");
	printf("   			 98327\n");
	printf("   The program will print to the screen 1187109.\n\n");
}

void transforma(char myString[200], int& numar)
{
	numar = 0;
	for (int i = 0; i < strlen(myString); i++)
	{
		int cifra = myString[i] - '0';
		numar = numar * 10 + cifra;
	}
}

int main()
{    
	Ruleaza_programul();
    return 0;
    system("pause");
}